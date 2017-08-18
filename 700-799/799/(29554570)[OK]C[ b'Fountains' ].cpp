#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int f(vector<pii> v, int p)
{
    int ans = 0;
    int n = v.size();
    map<int, int> ma;
    for(int forward = 0, backward = n-1; backward >= 0; --backward)
    {
        while(forward < n && v[forward].first <= p - v[backward].first)
            ++ma[v[forward++].second];
        if(forward <= backward)
        {
            if(!ma.empty())
                ans = max(ans, ma.rbegin()->first + v[backward].second);
        }
        else
        {
            if(ma.rbegin()->first == v[backward].second && ma.rbegin()->second == 1)
            {
                if(next(ma.begin()) != ma.end())
                {
                    auto x = prev(prev(ma.end()));
                    ans = max(ans, x->first + v[backward].second);
                }
            }
            else
                ans = max(ans, ma.rbegin()->first + v[backward].second);
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, c, d, b, p;
    int ans = 0, dd = 0, cc = 0;
    vector<pii> D, C;
    char t;
    cin>>n>>c>>d;
    for(int i = 0; i < n; ++i)
    {
        cin>>b>>p>>t;
        if(t == 'D')
        {
            if(p<=d)
            {
                D.push_back(pii(p,b));
                dd = max(dd, b);
            }
        }
        else
        {
            if(p<=c)
            {
                C.push_back(pii(p,b));
                cc = max(cc, b);
            }
        }
    }
    if(dd && cc)
        ans = dd + cc;
    sort(D.begin(), D.end());
    sort(C.begin(), C.end());
    ans = max(ans, f(D,d));
    ans = max(ans, f(C,c));
    cout<<ans<<endl;
    return 0;
}
