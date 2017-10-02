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
        LL t = n;
        n /= 2;
        cout<<n*(n-1)/2+t/2+t%2<<'\n';
    }
    return 0;
}
