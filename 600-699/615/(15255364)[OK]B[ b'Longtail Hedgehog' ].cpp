#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int A[(int)1e5+1];
vector<int> G[(int)1e5+1];

int main()
{
ios_base::sync_with_stdio(0);
	int n, m, a, b;
	LL ma = 0;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int i = 1; i <= n; ++i)
	{
		A[i] = 1;
		for(int j = 0; j < G[i].size(); ++j)
		{
			A[i] = max(A[i], A[G[i][j]] + 1);
		}
		ma = max(ma, (LL)A[i] * (LL)G[i].size());
	}
	cout<<ma;
	return 0;
}
