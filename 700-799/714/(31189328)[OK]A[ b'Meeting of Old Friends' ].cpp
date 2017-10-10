#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL l1, l2, r1, r2, k;
    cin>>l1>>r1>>l2>>r2>>k;
    LL l = max(l1, l2);
    LL r = min(r1, r2);
    if(k >= l && k <= r)
        --r;
    cout<<max(0LL, r-l+1)<<endl;
    return 0;
}
