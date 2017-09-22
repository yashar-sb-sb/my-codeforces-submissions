#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
int A[100001];
int M;


int f(int v, int p, int m)
{
    if(A[v])
        --m;
    else
        m = M;
    if(!m)
        return 0;
    int ans = T[v].size() == 1;
    for(auto i:T[v])
        if(i != p)
            ans += f(i, v, m);
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        cin>>A[i];
    int a, b;
    for(int i = 1; i < n; ++i)
    {
        cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    M = m + 1;
    cout<<f(1,0,m+1)<<endl;
    return 0;
}
