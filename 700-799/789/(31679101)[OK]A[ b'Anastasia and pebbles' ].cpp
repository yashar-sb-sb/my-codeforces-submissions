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
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        int inp;
        cin>>inp;
        ans += inp/k + bool(inp%k);
    }
    cout<<ans/2 + ans%2<<endl;
    return 0;
}
