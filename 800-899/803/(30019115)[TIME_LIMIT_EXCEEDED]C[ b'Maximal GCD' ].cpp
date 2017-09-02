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
    for(LL number = sqrt(n+1); number > 0; --number)
    {
        if(n % number == 0)
        {
            if((k*(k+1)/2)<=n/number)
                ans = max(ans, number);
            LL t = n / number;
            if((k*(k+1)/2)<=n/t)
                ans = max(ans, t);
        }
    }
    if(ans < 0)
        return cout<<ans<<endl, 0;

    for(LL i = 1; i < k; ++i)
        cout<<i*ans<<' ';
    cout<<n-k*(k-1)/2*ans<<endl;
    return 0;
}
