#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;



int main()
{
	ios_base::sync_with_stdio(0);
	int n,k,inp,cur=0,count=0,all = 0;
	vector<int>g;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp<0)
		{
			++all;
			if(count)
			{
				if(cur)g.push_back(cur);
				all+=cur;
			}
			cur = 0;
			++count;
		}
		else ++cur;
	}
	all+=cur;
	sort(g.begin(),g.end());
	int ans = 1;
	if(!count)return cout<<"-1\n",0;
	if(all<=k)return cout<<ans<<endl,0;
	while(g.size())
	{
		if(all-cur<=k)return cout<<ans+1<<endl,0;
		all -= *g.rbegin();
		g.pop_back();
		ans += 2;
		if(all<=k)return cout<<ans<<endl,0;
	}
	if(all-cur<=k)return cout<<ans+1<<endl,0;
	cout<<-1<<endl;
	return 0;
}