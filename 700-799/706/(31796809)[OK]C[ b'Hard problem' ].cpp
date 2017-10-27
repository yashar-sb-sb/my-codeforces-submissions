#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int C[100000];
string S[100000];
string R[100000];
LL dp[100000][2];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>C[i];
    for(int i = 0; i < n; ++i)
    {
        cin>>S[i];
        R[i] = S[i];
        reverse(R[i].begin(), R[i].end());
    }
    memset(dp, 127, sizeof(dp));
    dp[0][1] = C[0];
    dp[0][0] = 0;
    for(int i = 1; i < n; ++i)
    {
        if(S[i] >= S[i-1])
            dp[i][0] = dp[i-1][0];
        if(S[i] >= R[i-1])
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
        if(R[i] >= S[i-1])
            dp[i][1] = min(dp[i][1], dp[i-1][0]+C[i]);
        if(R[i] >= R[i-1])
            dp[i][1] = min(dp[i][1], dp[i-1][1]+C[i]);
    }
    LL ans = min(dp[n-1][0], dp[n-1][1]);
    if(ans > 1e18)
        ans = -1;
    cout<<ans<<endl;
    return 0;
}
