#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> G[200000];
int vis[200000];

int f(int v)
{
    if(vis[v])return 0;
    int res = vis[v] = 1;
    for(int i:G[v])
        res += f(i);
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n,m,a,b;
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
    {
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i = 1; i <= n; ++i)
    {
        int cur = f(i);
        m -= cur*(cur-1)/2;
    }
    cout<<(m?"NO":"YES")<<endl;
    return 0;
}
