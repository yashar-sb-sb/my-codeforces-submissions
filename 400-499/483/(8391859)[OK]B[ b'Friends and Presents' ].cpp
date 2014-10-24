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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL cn1,cn2,x,y;

bool test(LL v)
{
	LL a1 = v/x, a2 = v/y, aa = v/x/y, b = v -a1-a2 +aa;
	LL c1 = a2 - aa, c2 = a1 - aa;
	return(max((LL)0,cn1-c1)+max((LL)0,cn2-c2) - b <= 0);
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>cn1>>cn2>>x>>y;
	LL l = 0, r = 1e18, m;
	while(l<r)
	{
		m = (l+r)/2;
		if(test(m))r = m;
		else l = m + 1;
	}
	while(!test(m++));
	++m;
	while(test(--m));
	++m;
	cout<<m;
	return 0;
}