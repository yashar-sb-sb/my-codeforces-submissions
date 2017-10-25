#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, b, c;
    cin>>n>>b>>c;
    cin>>n;
    int ans = 0;
    while(cin>>n)
        ans += n<c && n>b;
    cout<<ans<<endl;
    return 0;
}
