#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int par[100002];
int sum[100002];
int A[100002];
int q[100000];
bool F[100002];

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
	int n,ma=0;
	vector<int> res;
	memset(par,-1,sizeof(par));
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
	}
	for(int i = 0; i < n; ++i)cin>>q[i];
	for(int i = n-1; i > -1; --i)
	{
		res.push_back(ma);
		F[q[i]] = true;
		if(F[q[i]-1])
		{
			int tmp = sum[root(q[i])]+sum[root(q[i]-1)];
			merge(q[i],q[i]-1);
			sum[root(q[i])] = tmp;
		}
		if(F[q[i]+1])
		{
			int tmp = sum[root(q[i])]+sum[root(q[i]+1)];
			merge(q[i],q[i]+1);
			sum[root(q[i])] = tmp;
		}
		sum[root(q[i])] += A[q[i]];
		ma = max(sum[root(q[i])],ma);
	}
	reverse(res.begin(),res.end());
	for(auto i:res)cout<<i<<'\n';
	return 0;
}