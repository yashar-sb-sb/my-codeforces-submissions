#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[2001];
map<int,int> M;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    int count = 0;
    while(true)
    {
        M.clear();
        for(int i = 0; i < n; ++i)
            ++M[A[i]];
        int mi = 1;
        for(int i = 1; i <= m; ++i)
            if(M[i]<=M[mi])
                mi = i;
        if(M[mi]==n/m)
            break;
        ++count;
        for(int i = 0; i < n; ++i)
        {
            if(M[A[i]] > n/m || (A[i]>m && M[A[i]]))
            {
                A[i] = mi;
                break;
            }
        }
    }
    cout<<n/m<<' '<<count<<'\n';
    for(int i = 0; i < n; ++i)
        cout<<A[i]<<' ';
    cout<<endl;
    return 0;
}
