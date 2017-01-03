#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	//ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	vector<int>ans;
	for(int i = 1; i <= n; ++i)
	{
		ans.push_back(i);n-=i;
	}
	for(int i = ans.size()-1; n; --n)++ans[i];
	cout<<ans.size()<<endl;
	for(auto i:ans)cout<<i<<' ';cout<<endl;
	return 0;
}