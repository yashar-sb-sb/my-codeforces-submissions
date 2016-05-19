#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii R[5001], C[5001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k,t,o;
	cin>>n>>m>>k;
	for(int i = 0; i < k; ++i)
	{
		cin>>t>>o;
		if(t == 1)
		{
			R[o].first = i;
			cin>>R[o].second;
		}
		else
		{
			C[o].first = i;
			cin>>C[o].second;
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			cout<<max(R[i],C[j]).second<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
