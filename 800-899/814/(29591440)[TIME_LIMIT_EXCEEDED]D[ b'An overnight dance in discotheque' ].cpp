#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> G[1000];
int root[1000];
int X[1000];
int Y[1000];
int R[1000];

#define po(x1, x2) (LL(x1-x2) * LL(x1-x2))

ldb pi = acos(-1);
ldb ans;
void f(int v, int d = 0)
{
    if(d < 2 || d%2==1)
        ans += pi * R[v] * R[v];
    else
        ans -= pi * R[v] * R[v];
    for(auto i:G[v])
        f(i, d+1);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cout.precision(20);
    cout.setf(ios::fixed);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>X[i]>>Y[i]>>R[i];
        for(int j = 0; j < i; ++j)
        {
            if(po(X[i], X[j]) + po(Y[i], Y[j]) < max(LL(R[i])*R[i], LL(R[j])*R[j]))
            {
                if(R[i]<R[j])
                {
                    G[j].insert(i);
                    root[i] = 1;
                }
                else
                {
                    G[i].insert(j);
                    root[j] = 1;
                }
            }
        }
    }
    vector<int> ee;
    for(int i = 0; i < n; ++i)
    {
        for(auto l:G[i])
            for(auto r:G[i])
                if(G[r].find(l) != G[r].end())
                    ee.push_back(l);
        for(auto d:ee)
            G[i].erase(d);
        ee.clear();
    }
    for(int i = 0; i < n; ++i)
        if(!root[i])
            f(i);
    cout<<ans<<endl;
    return 0;
}
