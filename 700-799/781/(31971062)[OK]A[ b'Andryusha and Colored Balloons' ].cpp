#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[200001];
int colors[200001];

int ans = 0;
void f(int v, int c, int p)
{
    colors[v] = c;
    ans = max(ans, c);
    int color = 1;
    for(int i:T[v])
    {
        while(color == c || color == p)
            ++color;
        if(!colors[i])
            f(i, color++, c);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1; i < n; ++i)
    {
        int a, b;
        cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    f(1, 1, 0);
    cout<<ans<<'\n';
    for(int i = 1; i <= n; ++i)
        cout<<colors[i]<<' ';
    cout<<endl;
    return 0;
}
