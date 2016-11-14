#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int par[1000001];
vector<int> vec[1000001],veci[1000001];
int A[1000001];

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
	int n,m;
	memset(par,-1,sizeof(par));
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	int a,b;
	for(int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		merge(a,b);
	}
	for(int i = 1; i <= n; ++i)
	{
		vec[root(i)].push_back(A[i]);
		veci[root(i)].push_back(i);
	}
	for(int i = 1; i <= n; ++i)
	{
		sort(vec[i].begin(),vec[i].end(),greater<int>());
		for(int j = 0; j < vec[i].size(); ++j)
			A[veci[i][j]] = vec[i][j];
	}
	for(int i = 1; i <= n; ++i)cout<<A[i]<<' ';
	return 0;
}