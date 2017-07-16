#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> T[100001];
int in[100001];
int nums[100001];
set<int> se;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
    {
        int a, b;
        cin>>a>>b;
        T[a].push_back(b);
        ++in[b];
    }
    for(int i = 1; i <= n; ++i)
        if(!in[i])
            se.insert(i);
    for(int i = 1; i <= n; ++i)
    {
        int cur = *se.begin();
        se.erase(se.begin());
        nums[cur] = i;
        for(int j:T[cur])
            if(--in[j] == 0)
                se.insert(j);
    }
    for(int i = 1; i <= n; ++i)
        cout<<nums[i]<<' ';
    cout<<endl;
    return 0;
}
