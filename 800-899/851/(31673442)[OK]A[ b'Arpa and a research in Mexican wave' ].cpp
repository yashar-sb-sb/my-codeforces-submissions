#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, t;
    cin>>n>>k>>t;
    int ans;
    if(t <= n)
        ans = min(k, t);
    else
        ans = min(k, k - t + n);
    cout<<ans<<endl;
    return 0;
}
