#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    for(int r = 9; r >= 0; --r)
    {
        for(int i = 0; i < n; ++i)
            if(A[i]%10 == r && A[i] != 100)
            {
                A[i] += min(10-r, k);
                k -= min(10-r, k);
            }
    }
    for(int i = 0; i < n; ++i)
    {
        int t = min(100-A[i], k);
        A[i] += t;
        k -= t;
    }
    int ans = 0;
    for(int i = 0; i < n; ++i)
        ans += A[i] / 10;
    cout<<ans<<endl;
    return 0;
}
