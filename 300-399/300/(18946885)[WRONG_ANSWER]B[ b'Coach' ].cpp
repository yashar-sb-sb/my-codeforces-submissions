#include<bits/stdc++.h>

using namespace std;


typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int S[49];
vector<int> T[17];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,t = 1,a,b;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		if(S[a] && S[b])
		{
			if(S[a] != S[b])return cout<<-1,0;
		}
		else
		{
			if(S[a])
			{
				if(T[S[a]].size() < 3)
				{
					S[b] = S[a];
					T[S[b]].push_back(b);
				}
				else return cout<<-1,0;
			}
			else if(S[b])
			{
				if(T[S[b]].size() < 3)
				{
					S[a] = S[b];
					T[S[a]].push_back(a);
				}
				else return cout<<-1,0;
			}
			else
			{
				while(t <= n / 3 && T[t].size()>1)++t;
				if(t > n/3)return cout<<-1,0;
				S[a] = S[b] = t;
				T[t].push_back(a);
				T[t].push_back(b);
			}
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		while(T[t].size()>2)++t;
		if(!S[i])S[i] = t, T[t].push_back(i);
	}
	for(int i = 1; i <= n/3; ++i)
	{
		for(auto j:T[i])cout<<j<<' ';cout<<'\n';
	}
	return 0;
}
