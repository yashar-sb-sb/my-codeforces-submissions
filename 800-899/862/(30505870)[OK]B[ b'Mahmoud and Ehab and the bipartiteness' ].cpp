#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
int M[100001];
int A[2];

void f(int v = 1, int p = -1, int d = 0)
{
    ++A[d%2];
    M[v] = d%2;
    for(auto i:T[v])
        if(i != p)
            f(i, v, d+1);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, u, v;
    cin>>n;
    for(int i = 1; i < n; ++i)
    {
        cin>>u>>v;
        T[u].push_back(v);
        T[v].push_back(u);
    }
    f();
    LL ans = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(M[i] == 0)
        {
            ans += A[1]-T[i].size();
        }
    }
    cout<<ans<<endl;
    return 0;
}
