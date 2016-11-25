#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

string s,t;

bool f(int sl, int sr, int tl, int tr)
{
	int n = sr - sl;
	if(n%2)
	{
		for(int i = 0; i < n; ++i)if(s[sl+i]!=t[tl+i])return false;
		return true;
	}
	return
	(f(sl,sl+n/2, tl+n/2,tr)
	&& f(sl+n/2,sr, tl,tl+n/2))
	
	||
	(f(sl,sl+n/2, tl,tl+n/2)
	&& f(sl+n/2,sr, tl+n/2,tr))
;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>s>>t;
	cout<<(f(0,s.size(),0,s.size())?"YES":"NO")<<endl;
	return 0;
}