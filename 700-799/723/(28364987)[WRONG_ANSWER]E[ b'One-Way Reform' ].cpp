#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[201];
vector<int> G[201];
set<vector<int>> fake;
set<vector<int>> went;
int all;
vector<int> ans;
vector<int> now;

bool done = false;

void f(int v = 1)
{
    if(int(went.size()) == all)
    {
        done = true;
        now = ans;
    }
    if(done)
        return;
    for(int i:G[v])
    {
        if(went.find({min(i,v), max(i,v)}) == went.end())
        {
            went.insert({min(i,v), max(i,v)});
            ans.push_back(i);
            f(i);
            ans.pop_back();
            went.erase({min(i,v), max(i,v)});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, u, v;
        cin>>n>>m;
        all = 0;
        done = false;
        memset(A, 0, sizeof(A));
        fake.clear();
        for(int i = 0; i < 201; ++i)
            G[i].clear();
        for(int i = 0; i < m; ++i)
        {
            cin>>u>>v;
            ++A[u];
            ++A[v];
            G[u].push_back(v);
            G[v].push_back(u);
            ++all;
        }
        vector<int> edge;
        for(int i = 0; i <= n; ++i)
        {
            if(A[i]&1)
            {
                edge.push_back(i);
                if(edge.size() == 2)
                {
                    ++all;
                    G[edge[0]].push_back(edge[1]);
                    G[edge[1]].push_back(edge[0]);
                    fake.insert(edge);
                    edge.clear();
                }
            }
        }
        ans.clear();
        ans.push_back(1);
        f();
        cout<<n - 2 * fake.size()<<'\n';
        for(int i = 1; i < int(now.size()); ++i)
        {
            if(fake.find({min(now[i], now[i-1]), max(now[i], now[i-1])}) == fake.end())
                cout<<now[i]<<' '<<now[i-1]<<'\n';
        }
    }
    return 0;
}
