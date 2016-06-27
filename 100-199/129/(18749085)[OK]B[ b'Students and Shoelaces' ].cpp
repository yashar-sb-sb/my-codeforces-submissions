#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> G[101];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,b,res = 0;
	queue<int> q,p;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)q.push(i);
	while(m--)
	{
		cin>>a>>b;
		G[a].insert(b);
		G[b].insert(a);
	}
	while(!q.empty())
	{
		while(!q.empty())
		{
			if(G[q.front()].size()==1)p.push(q.front());
			q.pop();
		}
		res += p.size()>0;
		while(!p.empty())
		{
			if(!G[p.front()].empty())q.push(*G[p.front()].begin());
			if(!G[p.front()].empty())G[*G[p.front()].begin()].erase(p.front());
			p.pop();
		}
	}
	cout<<res<<endl;
	return 0;
}
