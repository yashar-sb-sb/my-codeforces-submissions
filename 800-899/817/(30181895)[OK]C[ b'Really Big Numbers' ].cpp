#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL n, s;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    if(s>n)
        return cout<<0<<endl, 0;
    LL ans = n-s+1LL;
    for(LL i = s; i <= n && i-s <= 1000LL; ++i)
    {
        LL t = i;
        LL sum = 0;
        while(t)
        {
            sum += t%10LL;
            t /= 10LL;
        }
        if(i-sum < s)
            --ans;
    }
    cout<<ans<<endl;
    return 0;
}
