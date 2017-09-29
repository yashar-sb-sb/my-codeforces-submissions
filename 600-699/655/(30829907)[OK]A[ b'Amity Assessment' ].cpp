#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string t, a, b;
    cin>>a;
    cin>>t;
    a+=t[1];
    a+=t[0];
    cin>>b;
    cin>>t;
    b+=t[1];
    b+=t[0];
    while(a[0] != 'X')
        a = a.substr(1) + a[0];
    while(b[0] != 'X')
        b = b.substr(1) + b[0];
    a = a.substr(1);
    b = b.substr(1);
    while(b[0] != a[0])
        b = b.substr(1) + b[0];
    cerr<<a<<endl<<b<<endl;
    cout<<(a==b ? "YES" : "NO")<<endl;
    return 0;
}
