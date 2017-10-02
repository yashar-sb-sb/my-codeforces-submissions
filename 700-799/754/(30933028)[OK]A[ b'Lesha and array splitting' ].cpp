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
    int sum = 0;
    int r = 0;
    for(int i = 1; i <= n; ++i)
    {
        int inp;
        cin>>inp;
        sum += inp;
        if(sum)
            r = i;
    }
    if(sum)
        return cout<<"YES"<<endl<<1<<endl<<1<<' '<<n<<endl, 0;
    else if(r)
        return cout<<"YES"<<endl<<2<<endl<<1<<' '<<r<<endl<<r+1<<' '<<n<<endl, 0;
    cout<<"NO"<<endl;
    return 0;
}
