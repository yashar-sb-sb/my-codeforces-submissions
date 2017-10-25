#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int C[50001][501];
vector<int> T[50001];
int n, k;

LL f(int v=1, int p=0)
{
    LL ans = 0;
    ++C[v][0];
    for(int i:T[v])
        if(i != p)
        {
            ans += f(i, v);
            for(int j = 0; j <= k; ++j)
            {
                ans += C[v][j] * C[i][k-j];
                C[v][j] += C[i][j];
            }
        }
    for(int i = k; i > 0; --i)
        C[v][i] = C[v][i-1];
    C[v][0] = 0;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    for(int i = 1; i < n; ++i)
    {
        int x, y;
        cin>>x>>y;
        T[x].push_back(y);
        T[y].push_back(x);
    }
    cout<<f()<<endl;
    return 0;
}
