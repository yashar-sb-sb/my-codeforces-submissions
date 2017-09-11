#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int color[200001];
vector<int> T[200001];
int ans = 0;


void f(int cur, int p=0)
{
    int nexcolor = 0;
    for(int i:T[cur])
        if(i != p)
        {
            do
                ++nexcolor;
            while(nexcolor == color[cur] || nexcolor == color[p]);
            color[i] = nexcolor;
            ans = max(ans, nexcolor);
            f(i, cur);
        }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    int a, b;
    cin>>n;
    for(int i = 1; i < n; ++i)
    {
        cin>>a>>b;
        T[a].push_back(b);
        T[b].push_back(a);
    }
    color[1] = 1;
    f(1);
    cout<<ans<<endl;
    for(int i = 1; i <= n; ++i)
        cout<<color[i]<<' ';
    cout<<endl;
    return 0;
}
