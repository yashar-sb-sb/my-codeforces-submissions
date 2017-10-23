#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b, c, ans = 0;
    cin>>n>>a>>b>>c;
    --n;
    if(n)
        ans += min(a,b);
    if(--n>0)
        ans += min(a,min(b,c))*n;
    cout<<ans<<endl;
    return 0;
}
