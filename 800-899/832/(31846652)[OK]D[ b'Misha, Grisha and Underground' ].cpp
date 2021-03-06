#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
int S[100001][20];
int L[100001];

void f(int v=1, int l=1, int p = 1)
{
    L[v] = l;
    ++l;
    S[v][0] = p;
    for(int i : T[v])
        if(i != p)
            f(i, l, v);
}

int lca(int a, int b)
{
    if(L[a]<L[b])
        swap(a, b);
    int d = L[a] - L[b];
    int l = 0;
    while(d)
    {
        if(d&1)
            a = S[a][l];
        ++l;
        d >>= 1;
    }
    l = 19;
    while(a!=b)
    {
        while(S[a][l] == S[b][l] && l > 0)
            --l;
        a = S[a][l];
        b = S[b][l];
    }
    return a;
}

int dist(int a, int b)
{
    int t = lca(a, b);
    return L[a] + L[b] - L[t] - L[t];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q;
    cin>>n>>q;
    for(int i = 2; i <= n; ++i)
    {
        cin>>S[i][0];
        T[S[i][0]].push_back(i);
        T[i].push_back(S[i][0]);
    }
    f();
    for(int j = 1; j < 20; ++j)
        for(int i = 1; i <= n; ++i)
            S[i][j] = S[S[i][j-1]][j-1];
    while(q--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int mid = lca(a, b);
        int t = lca(a, c);
        if(L[t] > L[mid])
            mid = t;
        t = lca(b, c);
        if(L[t] > L[mid])
            mid = t;
        int ans = max(dist(a, mid), max(dist(b, mid), dist(c, mid)));
        cout<<1 + ans<<'\n';
    }
    return 0;
}
