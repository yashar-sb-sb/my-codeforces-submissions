#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int nl = 0, nr = 1e9, ml = 0, mr = 1e9;

int main()
{
    ios_base::sync_with_stdio(0);
    int n, m, l, r;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>l>>r;
        nl = max(l,nl);
        nr = min(r,nr);
    }
    cin>>m;
    for(int i = 0; i < m; ++i)
    {
        cin>>l>>r;
        ml = max(l,ml);
        mr = min(r,mr);
    }
    cout<<max(0,max(ml-nr,nl-mr))<<endl;
    return 0;
}
