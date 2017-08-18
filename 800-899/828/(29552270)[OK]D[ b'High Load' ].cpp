#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    int cur = 2;
    cin>>n>>k;
    cout<<(n-1)/k * 2 + min(2,(n-1)%k)<<'\n';
    for(int i = 0; i < k; ++i)
    {
        int t = (n-1)/k + (i < (n-1)%k);
        int p = 1;
        while(t--)
        {
            cout<<p<<' '<<cur<<'\n';
            p = cur ++;
        }
    }
    return 0;
}
