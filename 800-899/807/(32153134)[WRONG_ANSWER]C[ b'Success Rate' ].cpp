#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool f(LL x, LL y, LL p, LL q)
{
    if(x>p || y>q)
        return false;
    LL a = p-x;
    x += a;
    y += a;
    return y <= q;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL x, y, p, q;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>p>>q;
        if(x!=y && p==q)
        {
            cout<<-1<<'\n';
            continue;
        }
        if(p==0)
        {
            if(x==0)
                cout<<0<<endl;
            else
                cout<<-1<<endl;
            return 0;
        }
        LL l = 0, r = 1e9;
        while(l+1<r)
        {
            LL m = (l+r)/2;
            if(f(x, y, p*m, q*m))
                r = m;
            else
                l = m;
        }
        p*=r;
        q*=r;
        LL a = p-x;
        x += a;
        y += a;
        a += q-y;
        cout<<a<<'\n';
    }
    return 0;
}
