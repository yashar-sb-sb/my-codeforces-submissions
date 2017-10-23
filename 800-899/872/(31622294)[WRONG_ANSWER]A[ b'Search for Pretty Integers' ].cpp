#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    int ma = 9, mb = 9;
    int inp;
    while(n--)
    {
        cin>>inp;
        ma = min(ma, inp);
    }
    while(m--)
    {
        cin>>inp;
        mb = min(mb, inp);
    }
    if(ma == mb)
    {
        cout<<ma<<endl;
    }
    else
        cout<<min(ma, mb)<<max(ma, mb)<<endl;
    return 0;
}
