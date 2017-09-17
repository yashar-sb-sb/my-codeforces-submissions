#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> G[200001];
int A[200001];
int S[200001];
LL ans = 1;
LL mod = 1e9+7;

LL f(int v)
{
    LL cur = 1;
    for(int i:G[v])
        cur += f(i);
    return cur;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, a, b;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>a>>b;
        G[b].push_back(a);
        A[a] = b;
    }
    for(int i = 1; i <= 2*n; ++i)
    {
        int cur = i;
        if(S[cur])
            continue;
        while(A[cur]&&!S[cur])
        {
            S[cur] = i;
            cur = A[cur];
        }
        if(!A[cur])
            continue;
        if(A[cur] != cur && S[cur] == i)
            ans = ans*2LL % mod;
    }
    for(int i = 0; i <= 2*n; ++i)
    {
        if(!A[i])
            ans = ans*f(i) % mod;
    }
    cout<<ans<<endl;
    return 0;
}
