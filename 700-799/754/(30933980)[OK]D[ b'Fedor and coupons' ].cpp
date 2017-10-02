#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> ranges[300000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
    {
        int l, r;
        cin>>l>>r;
        ranges[i] = {r, l, i+1};
    }
    sort(ranges, ranges+n);
    set<pii> sel, ser;
    for(int i = 0; i < n; ++i)
        ser.insert(pii(ranges[i][1], ranges[i][2]));
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        while(int(sel.size())<k && !ser.empty())
        {
            sel.insert(*ser.begin());
            ser.erase(ser.begin());
        }
        if(int(sel.size()) != k)
            break;
        ans = max(ans, ranges[i][0] - sel.rbegin()->first + 1);
        auto x = ser.find(pii(ranges[i][1], ranges[i][2]));
        if(x != ser.end())
            ser.erase(x);
        x = sel.find(pii(ranges[i][1], ranges[i][2]));
        if(x != sel.end())
            sel.erase(x);
    }
    cout<<ans<<endl;
    if(!ans)
    {
        for(int i = 1; i <= k; ++i)
            cout<<i<<' ';
        cout<<endl;
        return 0;
    }
    ser.clear();
    sel.clear();
    for(int i = 0; i < n; ++i)
        ser.insert(pii(ranges[i][1], ranges[i][2]));
    int cur = 0;
    for(int i = 0; i < n; ++i)
    {
        while(int(sel.size())<k && !ser.empty())
        {
            sel.insert(*ser.begin());
            ser.erase(ser.begin());
        }
        if(int(sel.size()) != k)
            break;
        cur = max(cur, ranges[i][0] - sel.rbegin()->first + 1);
        if(cur == ans)
        {
            for(auto t:sel)
                cout<<t.second<<' ';
            cout<<endl;
            return 0;
        }
        auto x = ser.find(pii(ranges[i][1], ranges[i][2]));
        if(x != ser.end())
            ser.erase(x);
        x = sel.find(pii(ranges[i][1], ranges[i][2]));
        if(x != sel.end())
            sel.erase(x);
    }
    return 0;
}
