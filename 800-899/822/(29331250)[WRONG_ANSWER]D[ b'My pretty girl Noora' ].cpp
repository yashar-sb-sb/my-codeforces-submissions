#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL t, l, r;
    cin>>t>>l>>r;
    LL d = 1;
    int sum = 0;
    for(int i = l; i <= r; ++i)
    {
        int ans = 0;
        int cur = i;
        while(cur > 1)
        {
            ans += cur/2 + cur%2*2;
            cur /= 2;
        }
        sum = (sum + ans*d%mod) % mod;
        d = d * t % mod;
    }
    cout<<sum<<endl;
    return 0;
}
