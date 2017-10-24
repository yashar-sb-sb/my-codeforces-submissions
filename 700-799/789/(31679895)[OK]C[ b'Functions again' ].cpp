#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];
LL S[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    for(int i = 1; i < n; ++i)
        S[i] = (1-(i%2*2))*abs(A[i] - A[i-1]) + S[i-1];
    LL mi, ma;
    mi = ma = S[n-1];
    LL ans = 0;
    for(int i = n-2; i >= 0; --i)
    {
        if(i%2)
            ans = max(ans, ma-S[i]);
        else
            ans = max(ans, S[i]-mi);
        ma = max(S[i], ma);
        mi = min(S[i], mi);
    }
    cout<<ans<<endl;
    return 0;
}
