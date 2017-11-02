#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_map<LL, LL> ma;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        LL v, u;
        cin>>t>>v>>u;
        if(t == 1)
        {
            int w;
            cin>>w;
            while(u!=v)
            {
                if(v<u)
                    swap(u,v);
                ma[v]+=w;
                v /= 2;
            }
        }
        else
        {
            LL ans = 0;
            while(u!=v)
            {
                if(v<u)
                    swap(u,v);
                ans += ma[v];
                v /= 2;
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}
