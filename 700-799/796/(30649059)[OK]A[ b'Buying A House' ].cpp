#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k;
    cin>>n>>m>>k;
    int ans = n, inp;
    for(int i = 1; i <= n; ++i)
    {
        cin>>inp;
        if(inp && inp <= k)
            ans = min(ans, abs(i-m));
    }
    cout<<ans*10<<endl;
    return 0;
}
