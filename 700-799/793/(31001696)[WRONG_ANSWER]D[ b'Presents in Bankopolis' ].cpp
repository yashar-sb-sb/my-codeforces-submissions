#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[81][81][81][2];
vector<pii> G[81];

int f(int l, int r, int k, int s)
{
    if(dp[l][r][k][s] > -2)
        return dp[l][r][k][s];
    int ans = -1;
    int from = s ? l : r;
    if(k == 1)
    {
        if(r>=l)
            ans = 0;
    }
    else
    for(pii i:G[from])
    {
        if(i.first > r || i.first < l)
            continue;
        int cur;
        int tmp;
        if(i.first < from)
        {
            cur = f(i.first, from-1, k-1, 1);
            tmp = f(l, i.first, k-1, 1);
        }
        else
        {
            cur = f(from+1, i.first, k-1, 0);
            tmp = f(i.first, r, k-1, 0);
        }
        if(tmp >= 0)
        {
            if(cur < 0)
                cur = tmp;
            cur = min(tmp, cur);
        }
        if(cur < 0)
            continue;
        cur += i.second;
        if(ans < 0)
            ans = cur;
        ans = min(ans, cur);
    }
    return dp[l][r][k][s] = ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, m;
    memset(dp, -2, sizeof(dp));
    cin>>n>>k>>m;
    for(int i = 0; i < n; ++i)
    {
        int u, v, c;
        cin>>u>>v>>c;
        G[u].push_back(pii(v,c));
    }
    int ans = -1;
    for(int i = 1; i <= n; ++i)
    {
        int l = f(1,i,k,0), r = f(i,n,k,1);
        if(l >= 0)
        {
            if(ans < 0)
                ans = l;
            else
                ans = min(l, ans);
        }
        if(r >= 0)
        {
            if(ans < 0)
                ans = r;
            else
                ans = min(r, ans);
        }
    }
    cout<<ans<<endl;
    return 0;
}
