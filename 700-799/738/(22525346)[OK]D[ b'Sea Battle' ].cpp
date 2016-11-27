#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b,k;
	cin>>n>>a>>b>>k;
	char c;
	int cur = 0;
	vector<int> ans;
	for(int i = 1; i <= n; ++i)
	{
		cin>>c;
		if(c=='0')++cur;
		else cur = 0;
		if(cur==b)ans.push_back(i),cur=0;
	}
	while(--a)ans.pop_back();
	cout<<ans.size()<<endl;
	for(auto i:ans)cout<<i<<' ';
	return 0;
}