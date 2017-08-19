#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> G[1000];
int rt[1000];
vector<int> cir[1000];

#define po(x1, x2) (LL(x1-x2) * LL(x1-x2))


int parr[1002];

int root(int v){return parr[v] < 0 ? v : (parr[v] = root(parr[v]));}
void merge(int x,int y){
    if((x = root(x)) == (y = root(y)))return;
    if(parr[y] < parr[x])
        swap(x, y);
    parr[x] += parr[y];
    parr[y] = x;
}


ldb pi = acos(-1);
ldb ans;
void f(int v, int d = 0)
{
    if(d < 2 || d%2==1)
        ans += pi * cir[v][0] * cir[v][0];
    else
        ans -= pi * cir[v][0] * cir[v][0];
    for(auto i:G[v])
        f(i, d+1);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout.precision(20);
    cout.setf(ios::fixed);
    memset(parr, -1, sizeof(parr));
    int n;
    cin>>n;
    int x, y, r;
    for(int i = 0; i < n; ++i)
    {
        cin>>x>>y>>r;
        cir[i] = {r, x, y};
    }
    sort(cir, cir+n);
    for(int i = 0; i < n; ++i)
    {
        for(int j = i-1; j >= 0; --j)
        {
            if(po(cir[i][1], cir[j][1]) + po(cir[i][2], cir[j][2]) < max(LL(cir[i][0])*cir[i][0], LL(cir[j][0])*cir[j][0]) && root(i) != root(j))
            {
                if(cir[i][0]<cir[j][0])
                {
                    G[j].insert(i);
                    rt[i] = 1;
                }
                else
                {
                    G[i].insert(j);
                    rt[j] = 1;
                }
                merge(i, j);
            }
        }
    }
    for(int i = 0; i < n; ++i)
        if(!rt[i])
            f(i);
    cout<<ans<<endl;
    return 0;
}
