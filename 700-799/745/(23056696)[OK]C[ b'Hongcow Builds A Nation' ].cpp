#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int K[1001], par[1001];
bool roots[1001];
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
	memset(par,-1,sizeof(par));
	int n,m,k,inp,a,b;
	cin>>n>>m>>k;
	for(int i = 0; i < k; ++i)
	{
		cin>>inp;
		K[inp] = true;
	}
	for(int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		merge(a,b);
	}
	for(int i = 1; i <= n; ++i)
	{
		if(K[i])roots[root(i)] = true;
	}
	vector<int> v;
	int sum=0, ans=0;
	for(int i = 1; i <= n; ++i)
	{
		if(root(i)==i)
		{
			if(roots[i])v.push_back(-par[i]);
			else sum -= par[i];
		}
	}
	sort(v.begin(),v.end());
	v[v.size()-1] += sum;
	ans = -m;
	for(auto i:v)ans += i*(i-1)/2;
	cout<<ans<<endl;
	return 0;
}