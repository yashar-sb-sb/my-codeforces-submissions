#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    int ans = 0;
    cin>>n;
    while(n--)
    {
        int s, d;
        cin>>s>>d;
        ++ans;
        if(s>=ans)
            ans = s;
        else
        {
            ans -= s;
            ans = s + d*(ans/d+bool(ans%d));
        }
    }
    cout<<ans<<endl;
    return 0;
}
