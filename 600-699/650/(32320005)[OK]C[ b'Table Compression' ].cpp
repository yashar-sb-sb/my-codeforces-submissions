#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> G[1000000];
int IN[1000000];
int MA[1000000];
vector<int> M[1000000];
int n, m;


int parr[1000000];

int root(int v){return parr[v] < 0 ? v : (parr[v] = root(parr[v]));}
void merge(int x,int y){
    if((x = root(x)) == (y = root(y)))return;
    if(parr[y] < parr[x])
        swap(x, y);
    parr[x] += parr[y];
    parr[y] = x;
}


void f(int v, int d=1)
{
    MA[v] = max(MA[v], d);
    if(IN[v])
        return;
    d = MA[v];
    IN[v] = -1;
    M[v/m][v%m] = d;
    for(int i:G[v])
    {
        --IN[i];
        f(i, d+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(parr, -1, sizeof(parr));
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
        {
            int inp;
            cin>>inp;
            M[i].push_back(inp);
        }
    for(int i = 0; i < n; ++i)
    {
        vector<pii> v;
        for(int j = 0; j < m; ++j)
            v.emplace_back(M[i][j], i*m+j);
        sort(v.begin(), v.end());
        for(int j = 1; j < m; ++j)
            if(v[j].first==v[j-1].first)
                merge(v[j-1].second, v[j].second);
    }
    for(int i = 0; i < m; ++i)
    {
        vector<pii> v;
        for(int j = 0; j < n; ++j)
            v.emplace_back(M[j][i], j*m+i);
        sort(v.begin(), v.end());
        for(int j = 1; j < n; ++j)
            if(v[j].first==v[j-1].first)
                merge(v[j-1].second, v[j].second);
    }
    for(int i = 0; i < n; ++i)
    {
        vector<pii> v;
        for(int j = 0; j < m; ++j)
            v.emplace_back(M[i][j], i*m+j);
        sort(v.begin(), v.end());
        for(int j = 1; j < m; ++j)
            if(root(v[j-1].second) != root(v[j].second))
            {
                G[root(v[j-1].second)].push_back(root(v[j].second));
                ++IN[root(v[j].second)];
            }
    }
    for(int i = 0; i < m; ++i)
    {
        vector<pii> v;
        for(int j = 0; j < n; ++j)
            v.emplace_back(M[j][i], j*m+i);
        sort(v.begin(), v.end());
        for(int j = 1; j < n; ++j)
            if(root(v[j-1].second) != root(v[j].second))
            {
                G[root(v[j-1].second)].push_back(root(v[j].second));
                ++IN[root(v[j].second)];
            }
    }
    for(int i = n*m-1; i >= 0; --i)
        f(root(i));
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            int h = root(i*m+j);
            cout<<M[h/m][h%m]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
