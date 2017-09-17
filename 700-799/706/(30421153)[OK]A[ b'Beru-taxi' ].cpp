#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ldb a, b;
    cin>>a>>b;
    ldb x, y, v;
    ldb ans = 1e18;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>v;
        x -= a;
        y -= b;
        ans = min(ans, sqrt(x*x + y*y)/v);
    }
    cout.setf(ios::fixed);
    cout.precision(20);
    cout<<ans<<endl;
    return 0;
}
