#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    k = min(k, n/2);
    LL ans = 0;
    while(k--)
    {
        ans += 2*n - 3;
        n -= 2;
    }
    cout<<ans<<endl;
    return 0;
}
