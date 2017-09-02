#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int d, r;
    int xi, yi, ri;
    cin>>r>>d;
    int n, ans = 0;
    cin>>n;
    while(n--)
    {
        cin>>xi>>yi>>ri;
        int D = xi*xi+yi*yi;
        ans += (r-d+ri)*(r-d+ri) <= D && (r-ri)*(r-ri) >= D;
    }
    cout<<ans<<endl;
    return 0;
}
