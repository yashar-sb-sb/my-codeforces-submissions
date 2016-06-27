#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int sum,limit;
	vector<int> res;
	cin>>sum>>limit;
	++limit;
	while(--limit && sum)
	{
		int i;
		for(i = 1; !(i & limit); i = i<<1);
		if(i <= sum)
		{
			sum -= i;
			res.push_back(limit);
		}
	}
	if(!sum)
	{
		cout<<res.size()<<'\n';
		for(auto i:res)cout<<i<<' ';cout<<endl;
	}
	else cout<<"-1\n";
	return 0;
}
