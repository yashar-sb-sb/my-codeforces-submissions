#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[201];
vector<pii> G[201];
set<vector<int>> fake;
set<int> went;
int all;
vector<int> ans;
vector<int> now;

bool done = false;


int parr[300];

int root(int v){return parr[v] < 0 ? v : (parr[v] = root(parr[v]));}
void merge(int x,int y){
    if((x = root(x)) == (y = root(y)))return;
    if(parr[y] < parr[x])
        swap(x, y);
    parr[x] += parr[y];
    parr[y] = x;
}


void f(int v = 1)
{
    if(int(went.size()) == all)
    {
        done = true;
        now = ans;
    }
    if(done)
        return;
    for(pii i:G[v])
    {
        if(went.find(i.second) == went.end())
        {
            went.insert(i.second);
            ans.push_back(i.first);
            f(i.first);
            ans.pop_back();
            went.erase(i.second);
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
        int n, m, u, v, id = 1;
        cin>>n>>m;
        all = 0;
        memset(parr, -1, sizeof(parr));
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
            G[u].push_back(pii(v, id));
            G[v].push_back(pii(u, id++));
            merge(u,v);
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
                    G[edge[0]].push_back(pii(edge[1], id));
                    G[edge[1]].push_back(pii(edge[0], id++));
                    merge(edge[0],edge[1]);
                    fake.insert(edge);
                    edge.clear();
                }
            }
        }
        memset(A, 0, sizeof(A));
        ans.clear();
        for(int i = 1; i <= n; ++i)
        {
            A[root(i)] = i;
        }
        for(int i = 0; i <= n; ++i)
        {
            if(A[i])
                ans.push_back(A[i]);
        }
        int fks = fake.size();
        if(ans.size()>1)
        {
            u = ans[0];
            v = ans.back();
            ++all;
            G[u].push_back(pii(v, id));
            G[v].push_back(pii(u, id++));
            fake.insert({min(u,v), max(u,v)});
        }
        for(int i = 1; i < int(ans.size()); ++i)
        {
            u = ans[i];
            v = ans[i-1];
            ++all;
            G[u].push_back(pii(v, id));
            G[v].push_back(pii(u, id++));
            fake.insert({min(u,v), max(u,v)});
        }
        ans.clear();
        ans.push_back(1);
        f();
        cout<<n - 2 * fks<<'\n';
        for(int i = 1; i < int(now.size()); ++i)
        {
            if(fake.find({min(now[i], now[i-1]), max(now[i], now[i-1])}) == fake.end())
                cout<<now[i]<<' '<<now[i-1]<<'\n';
        }
    }
    return 0;
}
