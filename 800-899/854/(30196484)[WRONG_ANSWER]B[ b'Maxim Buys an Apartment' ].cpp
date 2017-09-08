#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,k;
    cin>>n>>k;
    int ans = 0;
    ans = n-k;
    ans = min(ans, 2*k);
    cout<<int(n!=k)<<' '<<ans<<endl;
    return 0;
}
