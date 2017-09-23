#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL f(LL x, LL y)
{
    return y*(y+1)/2*(x+1) + x*(x+1)/2*(y+1);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL m, b;
    cin>>m>>b;
    LL ans = 0;
    for(LL y = 0; y <= b; ++y)
    {
        LL x = (b-y)*m;
        ans = max(f(x, y), ans);
    }
    cout<<ans<<endl;
    return 0;
}
