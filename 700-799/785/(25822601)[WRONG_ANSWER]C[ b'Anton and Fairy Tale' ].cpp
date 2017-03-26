#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL n,m;

bool f(LL day)
{
    if(day >= n)
        return true;
    if(day <= m)
        return false;
    day = day - m;
    return day*(day+1)/2 +m >= n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    if(m>n) m = n;

    LL l, r;
    r = 2e18;
    l = 0;

    while(r - l > 1)
    {
        LL m = (l + r) / 2;
        if(f(m))
            r = m;
        else
            l = m;
    }
    cout<<r<<endl;

    return 0;
}
