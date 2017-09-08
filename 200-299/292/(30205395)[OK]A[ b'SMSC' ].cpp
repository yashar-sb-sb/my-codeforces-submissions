#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    LL q = 0;
    LL a = 0, b = 0;
    LL t, c;
    cin>>t>>c;
    for(LL i = 1;; ++i)
    {
        if(q)
        {
            LL l = min(t-i, q);
            if(l)
            {
                i += l-1;
                q -= l-1;
            }
        }
        if(q)
        {
            --q;
            a = i;
        }
        while(t<=i && n)
        {
            q += c;
            if(--n)
                cin>>t>>c;
            else
                t = 1e18;
        }
        b = max(b, q);
        if(!n && !q)
            break;
    }
    cout<<a<<' '<<b<<endl;
    return 0;
}
