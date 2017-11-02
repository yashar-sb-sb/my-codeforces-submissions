#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> R[1001];
int Rd[1001];
vector<int> C[1001];
int Cd[1001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
        {
            char ch;
            cin>>ch;
            if(ch == '#')
            {
                R[i].push_back(j);
                C[j].push_back(i);
            }
        }
    queue<pii> q;
    for(int i:R[1])
        q.emplace(1,i);
    Rd[1] = 1;
    while(!q.empty())
    {
        auto t = q.front();
        q.pop();
        if(!Rd[t.first])
        {
            for(int i:R[t.first])
                q.emplace(t.first, i);
            Rd[t.first] = Cd[t.second]+1;
        }
        if(!Cd[t.second])
        {
            for(int i:C[t.second])
                q.emplace(i, t.second);
            Cd[t.second] = Rd[t.first]+1;
        }
    }
    if(!Rd[n])
        cout<<-1<<endl;
    else
        cout<<Rd[n]-1<<endl;
    return 0;
}
