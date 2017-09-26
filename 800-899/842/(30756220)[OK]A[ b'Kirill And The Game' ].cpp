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
    while(x<=y)
    {
        if(x*k>=l && x*k<=r)
            return cout<<"YES"<<endl, 0;
        ++x;
    }
    cout<<"NO"<<endl;
    return 0;
}
