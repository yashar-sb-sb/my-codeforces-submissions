#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int color[200001];
vector<int> T[200001];
int ans = 0;

void mex(unordered_set<int> &se, int cur, int p = 0, int d = 3)
{
    se.insert(color[cur]);
    if(!--d)
        return;
    for(int i:T[cur])
        if(i != p)
            mex(se, i, cur, d);
}

void f(int cur, int p=0)
{
    unordered_set<int> se;
    mex(se, cur);
    for(int i = 1;; ++i)
        if(!se.count(i))
        {
            color[cur] = i;
            ans = max(ans, i);
            break;
        }
    for(int i:T[cur])
        if(i != p)
            f(i, cur);
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
    f(1);
    cout<<ans<<endl;
    for(int i = 1; i <= n; ++i)
        cout<<color[i]<<' ';
    cout<<endl;
    return 0;
}
