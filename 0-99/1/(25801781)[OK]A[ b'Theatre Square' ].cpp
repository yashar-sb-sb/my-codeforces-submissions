#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);
    LL n, m, a;
    cin>>n>>m>>a;
    n = n/a + bool(n%a);
    m = m/a + bool(m%a);
    cout<<n*m<<endl;
    return 0;
}
