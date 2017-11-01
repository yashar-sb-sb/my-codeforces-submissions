#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, l, x, y;
    cin>>n>>l>>x>>y;
    set<int> se;
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        se.insert(inp);
    }
    bool canx = false;
    for(int i:se)
        if(se.count(i-x))
            canx = true;
    bool cany = false;
    for(int i:se)
        if(se.count(i-y))
            cany = true;
    vector<int> ans;
    if(!canx && !cany)
    {
        for(int i:se)
        {
            if(se.count(i-x-y))
            {
                ans.push_back(i-y);
                canx = true;
                cany = true;
                break;
            }
        }
    }
    if(!canx && !cany)
    {
        for(int i:se)
        {
            if(se.count(i+x-y) && i-y > 0)
            {
                ans.push_back(i-y);
                canx = true;
                cany = true;
            }
        }
    }
    if(!canx && !cany)
    {
        for(int i:se)
        {
            if(se.count(i+x-y) && i+x < l)
            {
                ans.push_back(i+x);
                canx = true;
                cany = true;
            }
        }
    }
    if(!canx)
        ans.push_back(x);
    if(!cany)
        ans.push_back(y);
    cout<<ans.size()<<endl;
    for(int i: ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
