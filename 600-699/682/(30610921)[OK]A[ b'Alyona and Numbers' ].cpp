#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    LL ans = 0;
    for(int i = 1; i <= 5; ++i)
    {
        int j = i != 5 ? 5-i : 5;
        LL a = (n-i+5)/5;
        LL b = (m-j+5)/5;
        ans += a*b;
    }
    cout<<ans<<endl;
    return 0;
}
