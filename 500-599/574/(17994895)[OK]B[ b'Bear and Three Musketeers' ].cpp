#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<pii> s;
map<int,set<int>> ms;
int A[4000];
int *l;

int main()
{
ios_base::sync_with_stdio(0);
	int n=1e9,m,a,b;
	cin>>m>>m;
	while(m--)
	{
		cin>>a>>b;
		s.insert(pii(min(a,b),max(a,b)));
		ms[a].insert(b);
		ms[b].insert(a);
	}
	for(auto i:s)
	{
		l = set_intersection(ms[i.first].begin(),ms[i.first].end(),ms[i.second].begin(),ms[i.second].end(),A);
		for(int *it = A; it < l; ++it)
		{
			n = min(n,(int)(ms[*it].size() + ms[i.first].size() + ms[i.second].size()));
		}
	}
	cout<<(n==1e9?-1:n-6)<<endl;
	return 0;
}
