#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> D[501];
multiset<int> ms;

inline void togle(int x, int y)
{
	set<int>::iterator it;
	int l,r;

	if(D[x].find(y) == D[x].end())
	{
		it = D[x].upper_bound(y);
		l = *prev(it), r = *it;
		ms.erase(ms.find(r -l -1));
		D[x].insert(y);
		if(y-l-1)ms.insert(y-l-1);
		if(r-y-1)ms.insert(r-y-1);
	}
	else
	{
		it = D[x].find(y);
		l = *prev(it), r = *next(it);
		D[x].erase(it);
		if(y-l-1)ms.erase(ms.find(y-l-1));
		if(r-y-1)ms.erase(ms.find(r-y-1));
		ms.insert(r-l-1);
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,q,inp;
	cin>>n>>m>>q;
	ms.insert(0);
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 0; j <= m+1; ++j)D[i].insert(j);
		for(int j = 1; j <= m; ++j)
		{
			cin>>inp;
			if(inp)togle(i,j);
		}
	}
	int a,b;
	while(q--)
	{
		cin>>a>>b;
		togle(a,b);
		cout<<*ms.rbegin()<<'\n';
	}
	return 0;
}
