#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int R[1001],C[1001],A[1001][1001];

int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m,k,x,y;
	char s;
	cin>>n>>m>>k;
	for(int i = 1; i <= n; ++i)
	{
		R[i] = i;
		for(int j = 1; j <= m; ++j)cin>>A[i][j];
	}
	for(int i = 1; i <= m; ++i)C[i] = i;
	while(k--)
	{
		cin>>s>>x>>y;
		if(s == 'c')
		{
			swap(C[x],C[y]);
		}
		else if(s == 'r')
		{
			swap(R[x],R[y]);
		}
		else
		{
			cout<<A[R[x]][C[y]]<<'\n';
		}
	}
	return 0;
}
