#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL a, b;
    cin>>a>>b;
    if(b - a > 10)
        return cout<<"0"<<endl, 0;
    LL ans = 1;
    while(b>a)
        ans = ans*b--%10;
    cout<<ans<<endl;
    return 0;
}
