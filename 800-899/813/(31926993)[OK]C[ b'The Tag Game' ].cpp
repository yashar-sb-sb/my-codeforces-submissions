#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(2e5+1)];
int ans = 0;
vector<int> T[int(2e5+1)];

void f(int v, int d=0, int p=0)
{
    A[v] = d;
    d += 2;
    for(int i:T[v])
        if(i != p)
            f(i, d, v);
}

void F(int v, int d=-1, int p=0)
{
    if(d >= A[v] - 1)
        return;
    ans = max(A[v], ans);
    d += 2;
    for(int i:T[v])
        if(i != p)
            F(i, d, v);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, x;
    cin>>n>>x;
    for(int i = 1; i < n; ++i)
    {
        int u, v;
        cin>>u>>v;
        T[u].push_back(v);
        T[v].push_back(u);
    }
    f(1);
    F(x);
    cout<<ans<<endl;
    return 0;
}
