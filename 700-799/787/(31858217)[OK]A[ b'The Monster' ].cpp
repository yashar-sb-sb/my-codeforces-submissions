#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int g = __gcd(a, c);
    if(abs(b-d) % g)
        return cout<<"-1\n", 0;
    while(b!=d)
    {
        if(b<d)
            b += a;
        else
            d += c;
    }
    cout<<d<<endl;
    return 0;
}
