#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int L[int(2e5+2)];
int R[int(2e5+2)];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, x;
    cin>>n>>k>>x;
    LL X = 1;
    while(k--)
        X *= x;
    for(int i = 1; i <= n; ++i)
        cin>>L[i];
    for(int i = n; i > 0; --i)
        R[i] = R[i+1] | L[i];
    LL ans = 0;
    for(int i = 1; i <= n; ++i)
    {
        ans = max(ans, LL(L[i-1]|R[i+1])|(X*L[i]));
        L[i] |= L[i-1];
    }
    cout<<ans<<endl;
    return 0;
}
