#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> G[101][101];
int components[101][101];

void f(int v, int c, int cc)
{
	if(components[cc][v])return;
	components[cc][v] = c;
	for(auto i:G[cc][v])f(i,c,cc);
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,b,c,q;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>a>>b>>c;
		G[c][a].push_back(b);
		G[c][b].push_back(a);
	}
	cin>>q;
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <=m; ++j)
			f(i,i,j);
	
	while(q--)
	{
		cin>>a>>b;
		int res = 0;
		for(int i = 1; i <= m;++i)
			if(components[i][a] == components[i][b])++res;
		cout<<res<<'\n';
	}
	return 0;
}
