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
    if(a<b)
        return cout<<-1<<endl, 0;
    if(a==b)
        return cout<<a<<endl, 0;
    LL x = (a+b)*2*b/a;
    ldb ans = a+b;
    ans /= 2*x;
    cout.setf(ios::fixed);
    cout.precision(12);
    cout<<ans<<endl;
    return 0;
}
