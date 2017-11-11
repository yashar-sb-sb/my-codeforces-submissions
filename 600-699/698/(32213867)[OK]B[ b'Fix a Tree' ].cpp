#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int T[200001];
int R[200001];
int vis[200001];
int components[200001];
int co = 0;

int f(int v)
{
    if(vis[v])
    {
        if(!R[v])
        {
            components[co++] = v;
            R[v] = v;
        }
        return R[v];
    }
    vis[v] = true;
    return R[v] = f(T[v]);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>T[i];
    for(int i = 1; i <= n; ++i)
        if(!vis[i])
            f(i);
    int root = 0;
    for(int i = 0; i < n; ++i)
        if(T[components[i]] == components[i])
        {
            root = components[i];
            break;
        }
    int ans = co - bool(root);
    if(!root)
        root = components[0];
    for(int i = 0; i < n; ++i)
        T[components[i]] = root;
    cout<<ans<<'\n';
    for(int i = 1; i <= n; ++i)
        cout<<T[i]<<' ';
    cout<<'\n';
    return 0;
}
