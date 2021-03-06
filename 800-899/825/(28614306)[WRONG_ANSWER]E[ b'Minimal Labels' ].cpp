#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
int nums[100001];
int mi[100001];
int nex = 1;
set<int> se;



int sm(int v)
{
    if(mi[v])
        return mi[v];
    mi[v] = v;
    for(int i:T[v])
        mi[v] = min(mi[v], sm(i));
    return mi[v];
}

void f(int v)
{
    if(nums[v])
        return;
    sort(T[v].begin(), T[v].end(), [](int i, int j){return sm(i)<sm(j);});
    for(int i:T[v])
        f(i);
    nums[v] = nex++;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin>>a>>b;
        T[b].push_back(a);
    }
    for(int i = 1; i <= n; ++i)
        f(i);
    for(int i = 1; i <= n; ++i)
        cout<<nums[i]<<' ';
    cout<<endl;
    return 0;
}
