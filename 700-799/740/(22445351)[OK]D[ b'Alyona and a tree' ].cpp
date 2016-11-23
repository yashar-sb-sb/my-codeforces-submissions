#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

LL A[200001],D[200001],S[200001],R[200001],P[200001];
vector<LL> T[200001];

LL d = 0;

void dfs(LL v = 1)
{
	S[++d] = D[v];
	S[d] += S[d-1];
	P[d] = 0;
	for(auto i:T[v])
	{
		dfs(i);
	}
	R[v] = P[d];
	auto x = lower_bound(S+1,S+d+1,S[d]-A[v]);
	LL from = x-S;
	--P[from-1];
	++P[d-1];
	P[d-1] += P[d];
	R[v] = P[d];
	--d;
	return;
}

int main()
{
ios_base::sync_with_stdio(0);
	LL n,p,w;
	cin>>n;
	for(int i = 1; i<=n; ++i)cin>>A[i];
	for(int i = 1; i < n; ++i)
	{
		cin>>p>>w;
		T[p].push_back(i+1);
		D[i+1] = w;
	}
	dfs();
	for(int i = 1; i <= n; ++i)cout<<R[i]<<' ';
	return 0;
}