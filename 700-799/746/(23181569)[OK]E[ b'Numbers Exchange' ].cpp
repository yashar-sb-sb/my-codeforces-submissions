#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii> odd, even, arb;
int codd = 1, ceven = 2;
bool valid = true;
int ans = 0, m;
set<int> se;

int getOdd()
{
	++ans;
	while(se.find(codd)!=se.end())codd+=2;
	se.insert(codd);
	if(codd>m)valid = false;
	return codd;
}

int getEven()
{
	++ans;
	while(se.find(ceven)!=se.end())ceven+=2;
	se.insert(ceven);
	if(ceven>m)valid = false;
	return ceven;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	pii a;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		
		cin>>a.second;
		a.first = i;
		if(se.find(a.second) == se.end())
		{
			se.insert(a.second);
			if(a.second & 1)odd.push_back(a);
			else even.push_back(a);
		}
		else arb.push_back(a);
	}
	while(arb.size())
	{
		auto p = arb.back();
		arb.pop_back();
		if(odd.size()<even.size())p.second = getOdd(), odd.push_back(p);
		else p.second = getEven(), even.push_back(p);
	}
	while(odd.size()<even.size())
	{
		auto p = even.back();
		even.pop_back();
		p.second = getOdd(), odd.push_back(p);
	}
	while(odd.size()>even.size())
	{
		auto p = odd.back();
		odd.pop_back();
		p.second = getEven(), even.push_back(p);
	}
	if(valid)
	{
		for(auto i:even)odd.push_back(i);
		sort(begin(odd),end(odd));
		cout<<ans<<endl;
		for(auto i:odd)cout<<i.second<<' ';
	}
	else cout<<-1<<endl;
	return 0;
}