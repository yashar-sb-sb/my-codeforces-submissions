#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL mod = 1e9+7;

LL mp(LL c, LL e)
{
	LL a = c;
	LL res = 1;
	while(e)
	{
		if(e&1)res = res*a%mod;
		a = a*a%mod;
		e >>= 1;
	}
	return res;
}

int main()
{
ios_base::sync_with_stdio(0);
	LL n, c = 1, a, res = 1;
	cin>>n;
	map<LL,LL> m;
	for(int i = 0; i < n; ++i)
	{
		cin>>a;
		c = (c*a)%mod;
		++m[a];
	}
	for(map<LL,LL>::iterator i = m.begin(); i != m.end(); ++i)
	{
		for(map<LL,LL>::iterator j = m.begin(); j != m.end(); ++j)
		{
			if(i != j)
			{
				res *= mp(i->first, (i->second)*(i->second+1)/2*(j->second+1));
				res = res % mod;
			}
		}
	}
	cout<<res;
	return 0;
}
