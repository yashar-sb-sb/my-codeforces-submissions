#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
int nums[100001];
int nex = 1;
set<int> se;

void f(int v)
{
    if(nums[v])
        return;
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
