#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, d, h;
    cin>>n>>d>>h;
    if(d > h*2 || (n > 2 && d == 1))
        return cout<<"-1\n", 0;
    for(int i = 2; i <= h+1; ++i)
        cout<<i-1<<' '<<i<<'\n';
    if(d > h)
    {
        cout<<1<<' '<<h+2<<'\n';
        for(int i = h+3; i <= d+1; ++i)
            cout<<i-1<<' '<<i<<'\n';
    }
    int base = d > h ? 1 : 2;
    for(int i = d + 2; i <= n; ++i)
        cout<<i<<' '<<base<<'\n';
    return 0;
}
