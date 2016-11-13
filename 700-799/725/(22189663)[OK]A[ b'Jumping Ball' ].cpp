#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,ans=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i = 0; i < n; ++i)
	{
		if(s[i] == '<')++ans;
		else break;
	}
	for(int i = n-1; i > -1; --i)
	{
		if(s[i] == '>')++ans;
		else break;
	}
	cout<<ans<<endl;
	return 0;
}