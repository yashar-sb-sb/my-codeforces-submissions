#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[101][101][11];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q, c;
    cin>>n>>q>>c;
    int x, y, s;
    for(int i = 0; i < n; ++i)
    {
        cin>>x>>y>>s;
        ++dp[x][y][s];
    }
    for(int i = 1; i < 101; ++i)
    {
        for (int j = 1; j < 101; ++j)
        {
            for(int d = 0; d < 11; ++d)
                dp[i][j][d] += dp[i-1][j][d] + dp[i][j-1][d] - dp[i-1][j-1][d];
        }
    }
    int t, x1, y1, x2, y2;
    ++c;
    for(int i = 0; i < q; ++i)
    {
        cin>>t>>x1>>y1>>x2>>y2;
        int ans = 0;
        for(int d = 0; d < 11; ++d)
        {
            ans += (dp[x2][y2][d] + dp[x1-1][y1-1][d]) * (d+t)%c;
            ans -= (dp[x1-1][y2][d] + dp[x2][y1-1][d]) * (d+t)%c;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
