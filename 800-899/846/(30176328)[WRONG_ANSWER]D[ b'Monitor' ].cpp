#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> Q[250000];
int A[501][501];
int n, m, q, k;

bool f(int t)
{
    memset(A,0, sizeof(A));
    for(int i = 0; i < q; ++i)
    {
        if(Q[i][2]<=t)
            A[Q[i][0]][Q[i][1]] = 1;
    }
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            A[i][j] += A[i-1][j] + A[i][j-1] -A[i-1][j-1];
    for(int i = k; i <= n; ++i)
    {
        for(int j = k; j <= m; ++j)
        {
            if(A[i][j] - A[i-k][j] -A[i][j-k] + A[i-k][j-k] == k*k)
                return true;
        }
    }
    return false;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m>>k>>q;
    int a, b, t;
    for(int i = 0; i < q; ++i)
    {
        cin>>a>>b>>t;
        Q[i] = {a, b, t};
    }
    int l = 0, r = 1e9+1;
    int m;
    while(l+1<r)
    {
        m = (l+r) / 2;
        if(f(m))
            r = m;
        else
            l = m;
    }
    if(r == 1e9 + 1)
        return cout<<-1<<endl, 0;
    cout<<r<<endl;
    return 0;
}
