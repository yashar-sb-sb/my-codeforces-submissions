#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int a[10], b[10];

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
        a[inp] = 1;
        ma = min(ma, inp);
    }
    while(m--)
    {
        cin>>inp;
        b[inp] = 1;
        mb = min(mb, inp);
    }
    for(int i = 1; i <= 9; ++i)
    {
        if(a[i] && b[i])
            return cout<<i<<endl, 0;
    }
    if(ma == mb)
    {
        cout<<ma<<endl;
    }
    else
        cout<<min(ma, mb)<<max(ma, mb)<<endl;
    return 0;
}
