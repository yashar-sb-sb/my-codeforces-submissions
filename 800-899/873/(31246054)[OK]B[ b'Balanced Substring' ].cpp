#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[200001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    char c;
    int bal = 0, ans = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin>>c;
        bal += c == '0' ? -1 : 1;
        if(!dp[bal+100000] && bal)
            dp[bal+100000] = i;
        else
            ans = max(i - dp[bal+100000], ans);
    }
    cout<<ans<<endl;
    return 0;
}
