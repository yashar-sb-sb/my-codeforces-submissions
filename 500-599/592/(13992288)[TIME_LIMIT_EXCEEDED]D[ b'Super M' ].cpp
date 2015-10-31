#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> g[123457];
bool f[123457], ff[123457];

void fu(int v)
{
	if(f[v]||g[v].size()!=1)return;
	int t = *g[v].begin();
	g[t].erase(v);
	g[v].erase(t);
	fu(t);
}

int ku(int v)
{
	if(g[v].size()>2)return 0;
	ff[v]=true;
	set<int>::iterator i;
	for(i = g[v].begin(); ff[*i]; ++i);
	return 1+ku(*i);
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,u,v,t=0,l=0;
	cin>>n>>m;
	for(int i = 1; i < n; ++i)
	{
		cin>>u>>v;
		g[u].insert(v);
		g[v].insert(u);
	}
	for(int i = 0; i<m; ++i)
	{
		cin>>u;
		f[u]=true;
	}
	for(int i = 1; i <= n; ++i)
	{
		fu(i);
	}
	for(int i = 1; i <= n; ++i)
	{
		if(g[i].size())++l;
		if(g[i].size()==1)
		{
			t = max(ku(i),t);
		}
	}
	cout<<2*l-2-t;
	return 0;
}
