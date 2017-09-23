#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[300001];
int dist[300001];
int police[300001];
map<pii,int> rdind;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, d;
    cin>>n>>k>>d;
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
    for(int i = 0; i < k; ++i)
    {
        int ind;
        cin>>ind;
        q.push({0, i, ind});
    }
    for(int i = 1; i < n; ++i)
    {
        int u, v;
        cin>>u>>v;
        T[u].push_back(v);
        T[v].push_back(u);
        rdind[pii(min(u,v), max(u,v))] = i;
    }
    memset(dist, 127, sizeof(dist));
    while(!q.empty())
    {
        auto top = q.top();
        q.pop();
        if(top[0] >= dist[top[2]])
            continue;
        police[top[2]] = top[1];
        dist[top[2]] = top[0];
        for(int i :T[top[2]])
            q.push({top[0] + 1, top[1], i});
    }
    vector<int> ans;
    for(int i = 0; i < n; ++i)
    {
        for(int j:T[i])
            if(i<j && police[i] != police[j])
                ans.push_back(rdind[pii(i,j)]);
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
