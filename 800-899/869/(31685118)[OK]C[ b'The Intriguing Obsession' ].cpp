#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL dp[5001][5001];
LL mod = 998244353;

LL f(LL a, LL b)
{
    if(a<b)
        swap(a,b);
    if(dp[a][b])
        return dp[a][b];
    if(b == 0)
        return dp[a][b] = 1;
    return dp[a][b] = (f(a, b-1) + a*f(a-1, b-1)) % mod;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, c;
    cin>>a>>b>>c;
    cout<<f(a,b)*f(a,c)%mod*f(c,b)%mod<<endl;
    return 0;
}
