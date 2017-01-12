#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int G[1000001];
LL F[500001];
int cg = 1;
int mod = 1000000007;
int main()
{
	ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		int c, inp;
		map<int,int> ma;
		cin>>c;
		for(int j = 0; j < c; ++j)
		{
			cin>>inp;
			++ma[inp];
		}
		map<int,vector<int>>p;
		for(auto j:ma)
		{
			p[j.second].push_back(j.first);
		}
		for(auto j:p)
		{
			map<int,vector<int>> t;
			for(auto l:j.second)
			{
				t[G[l]].push_back(l);
			}
			for(auto r:t)
			{
				for(auto d:r.second)
				{
					G[d] = cg;
				}
				++cg;
			}
		}
	}
	F[0] = F[1] = 1;
	for(LL i = 2; i <= 500000; ++i)F[i] = F[i-1]*i%mod;
	LL ans = 1;
	sort(G+1,G+m+1);
	LL c = 1;
	for(int i = 2; i <= m; ++i)
	{
		if(G[i] == G[i-1])++c;
		else
		{
			ans = ans*F[c]%mod;
			c = 1;
		}
	}
	ans = ans*F[c]%mod;
	cout<<ans<<endl;
	return 0;
}