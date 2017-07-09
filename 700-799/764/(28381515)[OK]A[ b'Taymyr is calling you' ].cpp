#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, z;
    cin>>n>>m>>z;
    int lcm = n*m/__gcd(n,m);
    cout<<z/lcm<<endl;
    return 0;
}
