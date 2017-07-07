#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int colors[300001];
vector<int> T[300001];
vector<int> S[300001];

void f(int v=1, int p=0)
{
    int color = 1;
    set<int> se;
    for(int i:S[v])
        se.insert(colors[i]);
    for(int i:S[v])
    {
        while(se.find(color) != se.end())
            ++color;
        if(!colors[i])
            colors[i] = color++;
    }
    for(int i:T[v])
    {
        if(i!=p)
            f(i, v);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, ans = 0;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
    {
        int si,inp;
        cin>>si;
        ans = max(ans, si);
        while(si--)
        {
            cin>>inp;
            S[i].push_back(inp);
        }
    }
    for(int i = 1; i < m; ++i)
    {
        int a, b;
        cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    f();
    cout<<ans<<'\n';
    for(int i = 1; i <= m; ++i)
        cout<<colors[i]<< ' ';
    cout<<endl;
    return 0;
}
