#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,x;
    cin>>n>>x;
    cout<<"YES"<<endl;
    if(n == 1)
    {
        cout<<x<<endl;
    }
    else if(n == 2)
    {
        cout<<0<<' '<<x<<endl;
    }
    else
    {
        cout<<0b1110100001001000000<<' '<<0b10110100001001000000<<' ';
        x ^= 0b1110100001001000000;
        x ^= 0b10110100001001000000;
        for(int i = 0; i < n-3; ++i)
        {
            x^=i;
            cout<<i<<' ';
        }
        cout<<x<<endl;
    }
    return 0;
}
