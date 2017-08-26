#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
typedef pair<LL,LL> point;


vector<point> P;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    LL x, y;
    cin>>n;
    P.reserve(n);
    for(int i = 0; i < n; ++i)
    {
        cin>>x>>y;
        P.push_back(point(x,y));
    }
    point bef, aft, cur;
    ldb ans = 1e18;
    for(int i = 0; i < n; ++i)
    {
        bef = P[(i-1+n)%n];
        aft = P[(i+1)%n];
        cur = P[i];

        cur.first -= bef.first;
        cur.second -= bef.second;
        aft.first -= bef.first;
        aft.second -= bef.second;

        ldb h = ldb(abs(cur.first * aft.second - cur.second * aft.first));
        ldb w = ldb(sqrt(aft.first*aft.first + aft.second*aft.second));
        ldb dis = h / w;

        ans = min(ans, dis/2);
    }
    cout.precision(10);
    cout.setf(ios::fixed);
    cout<<ans<<endl;
    return 0;
}
