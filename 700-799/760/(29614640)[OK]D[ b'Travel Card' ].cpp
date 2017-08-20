#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[100001];
int T[100001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>> T[i];
    dp[1] = 20;
    for(int i = 2; i <= n; ++i)
    {
        dp[i] = dp[i-1] + 20;
        int l = 0, r = i;
        while(l+1<r)
        {
            int m = (l+r)/2;
            if(T[m]>T[i]-90)
                r = m;
            else
                l = m;
        }
        dp[i] = min(dp[i], dp[l] + 50);
        l = 0, r = i;
        while(l+1<r)
        {
            int m = (l+r)/2;
            if(T[m]>T[i]-1440)
                r = m;
            else
                l = m;
        }
        dp[i] = min(dp[i], dp[l] + 120);
    }
    for(int i = 1; i <= n; ++i)
        cout<<dp[i]-dp[i-1]<<'\n';
    return 0;
}
