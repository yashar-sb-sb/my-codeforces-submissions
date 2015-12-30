#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>
#include<set>
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL f(LL n)
{
	LL res = 0;
	LL c = 0, a = 0, m;
	while(n)
	{
		++c;
		if(!(n&1))
		{
			m = c;
			++a;
		}
		n = n>>1;
	}
	if(a)
	{
		if(a>1)++m;
		res += c - m;
		--c;
	}
	res += c*(c-1)/2;
	return res;
}

int main()
{
ios_base::sync_with_stdio(0);
	LL a, b;
	cin>>a>>b;
	--a;
	cout<<f(b) - f(a);
	return 0;
}
