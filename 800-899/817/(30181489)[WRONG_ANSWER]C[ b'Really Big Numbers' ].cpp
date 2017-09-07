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
    LL ans = n-s;
    for(LL i = s+1; i <= n && i-s <= 1000; ++i)
    {
        LL t = i;
        LL sum = 0;
        while(t)
        {
            sum += t%10;
            t /= 10;
        }
        if(i-sum < s)
            --ans;
    }
    cout<<ans<<endl;
    return 0;
}
