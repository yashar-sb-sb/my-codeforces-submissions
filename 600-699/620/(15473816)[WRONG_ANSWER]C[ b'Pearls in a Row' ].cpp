#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<int> s;
vector<pii> res;

int main()
{
ios_base::sync_with_stdio(0);
	int n, a, start = 1;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>a;
		if(s.find(a)!=s.end())
		{
			res.push_back(pii(start,i));
			start = i + 1;
			s.clear();
		}
		else s.insert(a);
	}
	cout<<(res.size()?(int)res.size():-1)<<'\n';
	for(vector<pii>::iterator i = res.begin(); i != res.end(); ++i)
	{
		cout<<i->first<<' '<<i->second<<'\n';
	}
	return 0;
}
