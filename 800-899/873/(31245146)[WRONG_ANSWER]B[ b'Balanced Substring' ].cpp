#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[100001];

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
        if(!dp[bal])
            dp[bal] = i;
        else
            ans = max(i - dp[bal], ans);
    }
    cout<<ans<<endl;
    return 0;
}
