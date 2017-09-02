#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL l, r, x, y, k;
    cin>>l>>r>>x>>y>>k;
    if(k*x<=r && k*y>=l)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
