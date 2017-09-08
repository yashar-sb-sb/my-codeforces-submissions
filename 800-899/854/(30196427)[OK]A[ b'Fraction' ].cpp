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
    cin>>n;
    int a = n/2, b = n/2+n%2;
    while(__gcd(a,b) != 1)
        --a, ++b;
    cout<<a<<' '<<b<<endl;
    return 0;
}
