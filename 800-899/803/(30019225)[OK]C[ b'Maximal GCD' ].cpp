#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL n, k;
    LL ans = -1;
    cin>>n>>k;
    for(LL number = sqrt(n+1LL); number > 0; --number)
    {
        if(n % number == 0)
        {
            if((k*(k+1LL)/2LL)<=n/number)
                ans = max(ans, number);
            LL t = n / number;
            if((k*(k+1LL)/2LL)<=n/t)
                ans = max(ans, t);
        }
    }
    if(k>10000000)
        ans = -1;
    if(ans < 0)
        return cout<<ans<<endl, 0;

    for(LL i = 1; i < k; ++i)
        cout<<i*ans<<' ';
    cout<<n-k*(k-1LL)/2LL*ans<<endl;
    return 0;
}
