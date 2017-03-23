#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int par[100000];

int root(int v){return par[v] < 0 ? v : (par[v] = root(par[v]));}
void merge(int x,int y){
    if((x = root(x)) == (y = root(y)))return;
    if(par[y] < par[x])
        swap(x, y);
    par[x] += par[y];
    par[y] = x;
}



int A[100001];
vector<int> S[100001];

vector<int> G[100001];
int color[1000001];
bool correct = true;

void f(int v, int c)
{
    if(color[v])
    {
        if(color[v] != c)
            correct = false;
        return;
    }
    color[v] = c;
    for(auto i:G[v])
        f(i,c==1?2:1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    memset(par, -1, sizeof(par));
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    for(int i = 0; i < m; ++i)
    {
        int x,inp;
        cin>>x;
        while(x--)
        {
            cin>>inp;
            S[inp].push_back(i);
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        if(A[i])
            merge(S[i][0],S[i][1]);
    }
    for(int i = 1; i <= n; ++i)
    {
        if(!A[i])
        {
            G[root(S[i][0])].push_back(root(S[i][1]));
            G[root(S[i][1])].push_back(root(S[i][0]));
        }
    }
    for(int i = 0; i < m; ++i)
    {
        if(!color[i])f(i,1);
    }
    cout<<(correct?"YES":"NO")<<endl;
    return 0;
}
