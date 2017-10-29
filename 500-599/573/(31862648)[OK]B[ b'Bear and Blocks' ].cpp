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
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    A[0] = 1;
    A[n-1] = 1;
    for(int i = 1; i < n; ++i)
        A[i] = min(A[i-1]+1, A[i]);
    int ans = 1;
    for(int i = n-2; i > 0; --i)
    {
        A[i] = min(A[i+1]+1, A[i]);
        ans = max(A[i], ans);
    }
    cout<<ans<<endl;
    return 0;
}
