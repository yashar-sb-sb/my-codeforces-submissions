#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, t;
    cin>>n>>t;
    for(int i = 1; i <= n; ++i)
    {
        int a;
        cin>>a;
        a = 86400-a;
        t-=a;
        if(t<=0)
            return cout<<i<<endl, 0;
    }
    return 0;
}
