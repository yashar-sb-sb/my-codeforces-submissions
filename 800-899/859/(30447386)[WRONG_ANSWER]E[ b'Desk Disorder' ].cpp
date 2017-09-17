#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

unordered_set<int> G[200001];
int dp[200001];
int A[200001];
int C[200001];
int S[200001];
LL ans = 1;
LL mod = 1e9+7;

int f(int v)
{
    if(S[v])
        return dp[v];
    S[v] = 1;
    dp[v] = 1;
    for(int i:G[v])
        dp[v] += f(i);
    return dp[v];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>a>>b;
        G[b].insert(a);
        A[a] = b;
    }
    for(int i = 1; i <= 2*n; ++i)
    {
        int cur = i;
        if(S[cur])
            continue;
        while(A[cur]&&!S[cur])
        {
            S[cur] = 1;
            cur = A[cur];
        }
        if(!A[cur])
            continue;
        while(!C[cur])
        {
            C[cur] = i;
            cur = A[cur];
        }
        if(A[cur] != cur)
            ans = ans*2LL % mod;
    }
    memset(S, 0, sizeof(S));
    for(int i = 0; i <= 2*n; ++i)
    {
        if(!A[i])
            ans = ans*f(i) % mod;
    }
    cout<<ans<<endl;
    return 0;
}
