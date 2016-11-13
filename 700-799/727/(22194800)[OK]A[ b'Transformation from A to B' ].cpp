#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;


int main()
{
ios_base::sync_with_stdio(0);
	int a,b;
	vector<int> ans;
	cin>>a>>b;
	ans.push_back(b);
	while(b>a)
	{
		if(b%10 == 1)ans.push_back(b = b/10);
		else if(b%2 == 0)ans.push_back(b = b/2);
		else break;
	}
	if(a != b)return cout<<"NO",0;
	cout<<"YES\n";
	cout<<ans.size()<<'\n';
	for(vector<int>::reverse_iterator i = ans.rbegin(); i != ans.rend(); ++i)cout<<*i<<' ';
	return 0;
}