#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x, y;
    cin>>x;
    cout<<"YES\n";
    while(cin>>x>>y)
    {
        cout<<1+(x%2+2)%2*2+(y%2+2)%2<<'\n';
        cin>>x>>y;
    }
    return 0;
}
