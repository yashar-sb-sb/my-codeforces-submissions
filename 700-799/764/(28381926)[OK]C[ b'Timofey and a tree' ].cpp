#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
int C[100001];

pii find(int v, int p = 0)
{
    pii a;
    for(int i:T[v])
        if(i != p)
        {
            if(C[i]!=C[v])
                a = pii(i,v);
            else
                a = find(i, v);
            if(a.first)
                return a;
        }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i < n; ++i)
    {
        int u, v;
        cin>>u>>v;
        T[u].push_back(v);
        T[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i)
        cin>>C[i];
    int leaf;
    for(int i = 1; i < n; ++i)
        if(T[i].size() == 1)
            leaf = i;
    auto a = find(leaf);
    if(!a.first)
        return cout<<"YES\n1\n", 0;
    pii b;
    for(int i:T[a.first])
    {
        b = find(i,a.first);
        if(b.first)
            break;
    }
    if(!b.first)
        return cout<<"YES\n"<<a.first<<endl, 0;
    for(int i:T[a.second])
    {
        b = find(i,a.second);
        if(b.first)
            break;
    }
    if(!b.first)
        return cout<<"YES\n"<<a.second<<endl, 0;
    cout<<"NO\n";
    return 0;
}
