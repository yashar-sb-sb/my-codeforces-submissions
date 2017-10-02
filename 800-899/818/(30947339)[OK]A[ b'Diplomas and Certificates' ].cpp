#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL n, k;
    cin>>n>>k;
    LL dip = n/2/(k+1);
    cout<<dip<<' '<<dip*k<<' '<<n-dip*(k+1)<<endl;
    return 0;
}
