#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int par[200001];
int col[200001];
bool F[200001];
vector<int> G[200001];
set<int> T[200001];

pii bfs(int start)
{
	queue<pii> q;
	q.push(pii(start,1));
	F[start] = true;
	pii tmp;
	while(!q.empty())
	{
		tmp = q.front();
		q.pop();
		for(auto j:T[tmp.first])
		{
			if(!F[j])q.push(pii(j,tmp.second+1));
			F[j] = true;
		}
	}
	return tmp;
}

int root(int v){return par[v] < 0 ? v : (par[v] = root(par[v]));}
void merge(int x,int y){	//	x and y are some tools (vertices)
        if((x = root(x)) == (y = root(y)))     return ;
	if(par[y] < par[x])	// balancing the height of the tree
		swap(x, y);
	par[x] += par[y];
	par[y] = x;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,u,v;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>col[i];
	}
	memset(par,-1,sizeof(par));
	for(int i = 1; i < n; ++i)
	{
		cin>>u>>v;
		if(col[u] == col[v])merge(u,v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	int dd = 0;
	for(int i = 1; i <= n; ++i)
	{
		for(auto j:G[i])
		{
			u = root(i);
			v = root(j);
			if(u!=v)
			{
				++dd;
				T[u].insert(v);
				T[v].insert(u);
			}
		}
	}
	int start = 1;
	for(; start <= n && T[start].size()!=1; ++start);
	
	if(start>n)return cout<<0,0;
	pii re = bfs(start);
	memset(F,0,sizeof(F));
	re = bfs(re.first);
	cout<<re.second/2<<endl;
	return 0;
}