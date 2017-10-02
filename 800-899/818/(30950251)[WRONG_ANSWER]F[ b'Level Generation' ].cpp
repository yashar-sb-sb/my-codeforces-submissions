#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        LL n;
        cin>>n;
        LL b = n/2;
        n -= b;
        cout<<n*(n-1)/2+b<<'\n';
    }
    return 0;
}
