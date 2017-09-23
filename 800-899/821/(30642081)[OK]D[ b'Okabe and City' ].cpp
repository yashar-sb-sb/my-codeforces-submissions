#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii> L;
int costs[10004];
int seen[10004];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, k;
    cin>>n>>m>>k;
    for(int i = 0; i < k; ++i)
    {
        int a, b;
        cin>>a>>b;
        L.emplace_back(a,b);
    }
    sort(L.begin(), L.end());
    if(L.back() != pii(n,m))
        L.emplace_back(n+1,m+1);
    memset(costs, 127, sizeof(costs));
    priority_queue<pii, std::vector<pii>, std::greater<pii>> q;
    q.push(pii(0, 0));
    while(!q.empty())
    {
        pii top = q.top();
        q.pop();
        if(seen[top.second])
            continue;
        seen[top.second] = 1;
        costs[top.second] = top.first;
        for(int I = 0; I < int(L.size()); ++I)
        {
            int j = top.second;
            if(I != j && min(abs(L[I].second-L[j].second), abs(L[I].first-L[j].first)) < 3)
            {
                int dist = abs(L[I].second-L[j].second)+abs(L[I].first-L[j].first) > 1;
                pii i = {I, dist};
                if(costs[i.first]>top.first+i.second)
                {
                    costs[i.first] = top.first+i.second;
                    q.emplace(top.first+i.second, i.first);
                }
            }
        }
    }
    int ans = costs[L.size()-1];
    if(ans == costs[10003])
        ans = -1;
    cout<<ans<<endl;
    return 0;
}
