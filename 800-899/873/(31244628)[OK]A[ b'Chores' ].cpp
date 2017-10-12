#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, x;
    cin>>n>>k>>x;
    int ans = 0;
    for(int i = 0; i < n-k; ++i)
    {
        int inp;
        cin>>inp;
        ans += inp;
    }
    for(int i = 0; i < k; ++i)
    {
        int inp;
        cin>>inp;
        ans += min(inp, x);
    }
    cout<<ans<<endl;
    return 0;
}
