#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[2000], B[2000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, p;
    cin>>n>>k>>p;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    for(int i = 0; i < k; ++i)
        cin>>B[i];
    sort(A, A+n);
    sort(B, B+k);
    int ans = 2e9+100;
    for(int i = 0; i <= k-n; ++i)
        ans = min(ans, max(abs(A[0]-B[i])+abs(B[i]-p), abs(A[n-1]-B[i+n-1])+abs(B[i+n-1]-p)));
    cout<<ans<<endl;
    return 0;
}
