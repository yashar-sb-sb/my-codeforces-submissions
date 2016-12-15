#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int par[200001];
int A[200001];
map<int,int> M[200001];
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
	int n,m,k;
	memset(par,-1,sizeof(par));
	cin>>n>>m>>k;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		merge(a,b);
	}
	int ans = 0;
	for(int i = 0; i <= n; ++i)
	{
		++M[root(i)][A[i]];
	}
	for(int i = 0; i <= n; ++i)
	{
		int sum = 0, ma = 0;
		for(auto j:M[i])ma = max(ma,j.second), sum += j.second;
		ans += sum - ma;
	}
	cout<<ans<<endl;
	return 0;
}