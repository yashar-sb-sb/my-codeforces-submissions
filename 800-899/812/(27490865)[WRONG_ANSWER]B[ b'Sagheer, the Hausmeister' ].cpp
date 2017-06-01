#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100][200];
int F[100];
int L[100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    char c;
    cin>>n>>m;
    m += 2;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin>>c;
            A[i][j] = c - '0';
            if(!F[i] && A[i][j])
                F[i] = j;
            if(A[i][j])
                L[i] = j;
        }
    }
    A[0][0] = L[0];
    A[0][m-1] = m - F[0] - 1;
    if(!L[0])
        A[0][m-1] = 0;
    for(int i = 1; i < n; ++i)
    {
        A[i][0] = min(1 + 2 * L[i] + A[i-1][0], m + A[i-1][m-1]);
        A[i][m-1] = min(1 + 2 * (m - F[i] - 1) + A[i-1][m-1], m + A[i-1][0]);
        if(!A[i-1][0])
        {
            A[i][0] = L[i];
            A[i][m-1] = m - F[i] - 1;
            if(!L[i])
                A[i][m-1] = 0;
        }
    }
    cout<<A[n-1][0]<<endl;
    return 0;
}
