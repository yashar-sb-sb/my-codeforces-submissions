#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

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
        LL a = 0;
        if(p)
            a = (x-1)/p;
        LL b = (y-1)/q;
        LL P=p+max(a,b)*p;
        LL Q=q+max(a,b)*q;
        if(Q-P<y-x)
        {
            a = ((y-x)-(Q-P)-1)/(q-p)+1;
            P+=a*p;
            Q+=a*q;
        }
        cout<<Q-y<<'\n';
    }
    return 0;
}
