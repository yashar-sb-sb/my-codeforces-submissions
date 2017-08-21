#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> G[100001];
pii raps[100001];
int D[100001];

int ma = 0;
int n, m;
vector<int> ans;

void topsort(int v = 1)
{
    for(int i = v; i <= n; ++i)
    {
        if(D[i] == 0)
        {
            D[i] = -1;
            ans.push_back(i);
            for(int t:G[i])
            {
                --D[t];
                topsort(t);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
    {
        cin>>raps[i].first>>raps[i].second;
        G[raps[i].first].push_back(raps[i].second);
        ++D[raps[i].second];
    }
    topsort();
    set<pii> se;
    for(int i = 0; i < n-1; ++i)
        se.insert(pii(ans[i], ans[i+1]));

    for(int i = 0; i < m; ++i)
    {
        se.erase(raps[i]);
        if(se.empty())
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl, 0;

    return 0;
}
