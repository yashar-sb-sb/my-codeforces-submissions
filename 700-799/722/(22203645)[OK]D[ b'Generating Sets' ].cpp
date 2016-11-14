#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

set<int> s;

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		s.insert(inp);
	}
	while(true)
	{
		int cur = *s.rbegin();
		while(s.find(cur)!=s.end())
		{
			cur/=2;
		}
		if(cur==0)break;
		s.erase(*s.rbegin());
		s.insert(cur);
	}
	for(auto i:s)cout<<i<<' ';
	return 0;
}