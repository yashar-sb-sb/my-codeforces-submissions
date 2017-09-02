#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100][100];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    int t = min(n,k);
    if((k-t)%2 != 0)
        --t;
    k -= t;
    for(int i = 0; i < t; ++i)
        A[i][i] = 1;
    for(int i = 0; i < n && k; ++i)
        for(int j = 0; j < n && k; ++j)
            if(!A[i][j] && i!=j)
            {
                k -= 2;
                A[i][j] = A[j][i] = 1;
            }
    if(k)
        return cout<<"-1"<<endl, 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout<<A[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
