#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int F[int(5e5+1)];
int B[int(5e5+1)];
string S;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b, T;
    cin>>n>>a>>b>>T>>S;
    int base = 1 + (S[0] == 'w' ? b : 0);
    if(base > T)
        return cout<<0<<endl, 0;
    for(int i = 1; i < n; ++i)
    {
        F[i] = F[i-1] + a + 1;
        if(S[i] == 'w')
            F[i] += b;
        B[i] = B[i-1] + a + 1;
        if(S[n-i] == 'w')
            B[i] += b;
    }
    T -= base;
    int bi = 1;
    while(bi<n && B[bi] <= T)
        ++bi;
    int ans = bi;
    int ai = 0;
    for(; ai < n; ++ai)
    {
        while(bi>0 && F[ai]+B[bi]+a*ai>T)
            --bi;
        if(F[ai]+B[bi]+a*ai<=T)
            ans = max(ans, ai+bi+1);
    }
    ai = 0;
    while(ai<n && F[ai] <= T)
        ++ai;
    ans = max(ai, ans);
    for(bi = 0; bi < n; ++bi)
    {
        while(ai>0 && F[ai]+B[bi]+a*bi>T)
            --ai;
        if(F[ai]+B[bi]+a*bi<=T)
            ans = max(ans, ai+bi+1);
    }
    ans = min(ans, n);
    cout<<ans<<endl;
    return 0;
}
