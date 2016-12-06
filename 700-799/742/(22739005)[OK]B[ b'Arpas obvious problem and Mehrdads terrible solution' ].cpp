#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<int,int> m;

int main()
{
	int n,x;
	LL ans = 0;
	cin>>n>>x;
	int inp;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		ans += m[inp^x];
		++m[inp];
	}
	cout<<ans<<endl;
	return 0;
}