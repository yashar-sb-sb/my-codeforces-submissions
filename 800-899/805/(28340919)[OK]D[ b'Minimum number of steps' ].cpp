#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;
    LL bs = 0;
    LL ans = 0;
    for(int i = s.size()-1; i >= 0; --i)
    {
        if(s[i] == 'a')
        {
            ans += bs;
            bs *= 2;
        }
        else
            ++bs;
        ans %= mod;
        bs %= mod;
    }
    cout<<ans<<endl;
    return 0;
}
