#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL c, hr, hb, wr, wb;

#define f(i) (hr*(i) + (c - (i)*wr)/wb*hb)

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>> c>> hr>> hb>> wr>> wb;
    if(wb>wr)
    {
        swap(wb, wr);
        swap(hb, hr);
    }
    LL ans = 0;
    LL l = 0, r = c/wr, m1, m2;
    for(int i = 0; i < 1000000 && i < r; ++i)
    {
        ans = max(ans, f(i));
        ans = max(ans, f(r-i));
    }
    while(l+2<r)
    {
        m1 = (2*l + r)/3;
        m2 = (l + 2*r)/3;
        if(f(m1)<f(m2))
            l = m1;
        else
            r = m2;
    }
    while(l<=r)
    {
        ans = max(ans, f(l));
        ++l;
    }
    cout<<ans<<endl;
    return 0;
}
