#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

const int mod = 1e9 + 7;
bool orth[int(5e6+1)];
vector<int> primes;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL t, l, r;
    cin>>t>>l>>r;
    for(int i = 2; i <= r; ++i)
        if(!orth[i])
        {
            primes.push_back(i);
            for(LL j = LL(i) * i; j <= r; j += i)
                orth[j] = true;
        }
    LL d = 1;
    LL sum = 0;
    for(int i = l; i <= r; ++i)
    {
        LL ans = 0;
        LL cur = i;
        int p = 0;
        while(cur > 1)
        {
            LL temp = primes[p];
            if(temp * temp > cur)
                temp = cur;
            if(cur%temp == 0)
            {
                ans = (ans + cur/temp * (temp*(temp - 1)/2%mod)%mod)%mod;
                cur /= temp;
            }
            else
                ++p;
        }
        sum = (sum + ans*d%mod) % mod;
        d = d * t % mod;
    }
    cout<<sum<<endl;
    return 0;
}
