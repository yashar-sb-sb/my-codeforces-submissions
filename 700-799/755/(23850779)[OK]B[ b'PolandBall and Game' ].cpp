#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int n,m,a=0,b=0,c=0;
	set<string> sa,sb;
	cin>>n>>m;
	string s;
	for(int i = 0; i < n; ++i)
	{
		cin>>s;
		sa.insert(s);
	}
	a = n;
	for(int i = 0; i < m; ++i)
	{
		cin>>s;
		sb.insert(s);
		if(sa.find(s)!=sa.end())--a,++c;
		else ++b;
	}
	if(c&1)++a;
	cout<<(a>b?"YES":"NO")<<endl;
	return 0;
}