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
    while(1)
    {
        LL t = n;
        int i = 0;
        while(t%10==0)
        {
            t/=10;
            ++i;
        }
        if(i>=k)
            break;
        if(t%2==0)
            n *= 5;
        else
            n *= 2;
    }
    cout<<n<<endl;
    return 0;
}
