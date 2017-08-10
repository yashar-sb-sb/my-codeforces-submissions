#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int cost[1000000];
vector<vector<int>> sweep;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, x;
    cin>>n>>x;
    sweep.reserve(2*n);
    for(int i = 0; i < n; ++i)
    {
        int l, r, c;
        cin>>l>>r>>c;
        sweep.push_back({l, -c, r-l+1});
        sweep.push_back({r, c, r-l+1});
    }
    sort(sweep.begin(), sweep.end());
    int ans = 2e9+1;
    for(auto line : sweep)
    {
        if(line[1] > 0)
        {
            if(!cost[line[2]] || cost[line[2]] > line[1])
                cost[line[2]] = line[1];
        }
        else
        {
            if(x <= line[2])
                continue;
            int other = cost[x - line[2]];
            if(other)
                ans = min(other - line[1], ans);
        }
    }
    if(ans == 2e9 + 1)
        ans = -1;
    cout<<ans<<endl;
    return 0;
}
