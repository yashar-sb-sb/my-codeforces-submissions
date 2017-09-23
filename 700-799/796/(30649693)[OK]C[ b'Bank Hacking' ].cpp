#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

multiset<int> all;
vector<int> T[300001];
int S[300001];

int f(int v)
{
    int ans = S[v];
    all.erase(all.find(S[v]));
    for(int i:T[v])
    {
        ans = max(S[i] + 1, ans);
        all.erase(all.find(S[i]));
    }
    if(all.size())
        ans = max(ans, *all.rbegin()+2);
    all.insert(S[v]);
    for(int i:T[v])
        all.insert(S[i]);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        cin>>S[i];
        all.insert(S[i]);
    }
    for(int i = 1; i < n; ++i)
    {
        int u, v;
        cin>>u>>v;
        T[u].push_back(v);
        T[v].push_back(u);
    }
    int ans = 1e9+5;
    for(int i = 1; i <= n; ++i)
        ans = min(ans, f(i));
    cout<<ans<<endl;
    return 0;
}
