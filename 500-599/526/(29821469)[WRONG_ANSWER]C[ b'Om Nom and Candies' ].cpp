#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL c, hr, hb, wr, wb;

LL f(LL i)
{
    if(i*wr>c)
        return c/wr*hr;
    LL cc = c - i*wr;
    return hr*i + cc/wb*hb;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>> c>> hr>> hb>> wr>> wb;
    LL l = 0, r = c/wr, m1, m2;
    while(l+2<r)
    {
        m1 = (2*l + r)/3;
        m2 = (l + 2*r)/3;
        if(f(m1)<f(m2))
            l = m1;
        else
            r = m2;
    }
    LL ans = 0;
    while(l<=r)
        ans = max(ans, f(l++));
    cout<<ans<<endl;
    return 0;
}
