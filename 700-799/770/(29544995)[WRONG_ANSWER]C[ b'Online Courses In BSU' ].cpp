#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> G[100001];
int A[100000];
int col[100000];
vector<int> ans;


bool f(int v)
{
    if(col[v] == 2)
        return true;
    if(col[v] == 1)
        return false;
    col[v] = 1;
    for(int i :G[v])
        if(!f(i))
            return false;
    col[v] = 2;
    ans.push_back(v);
    return true;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin>>n>>k;
    for(int i = 0; i < k; ++i)
        cin>>A[i];
    for(int i = 1; i <= n; ++i)
    {
        int t, inp;
        cin>>t;
        for(int j = 0; j < t; ++j)
        {
            cin>>inp;
            G[i].push_back(inp);
        }
    }
    for(int i = 0; i < k; ++i)
        if(!f(A[i]))
            return cout<<"-1\n", 0;
    cout<<ans.size()<<'\n';
    for(int i:ans)
        cout<<i<<' ';
    cout<<endl;
    return 0;
}
