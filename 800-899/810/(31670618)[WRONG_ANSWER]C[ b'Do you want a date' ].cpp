#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(3e5)];
int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    LL ans = 0;
    LL two = 2;
    for(int i = 1; i < n; ++i)
    {
        ans = 3*ans % mod;
        ans = (ans + (two-1) * (A[i] - A[i-1])) % mod;
        two = two * 2 % mod;
    }
    cout<<ans<<endl;
    return 0;
}
