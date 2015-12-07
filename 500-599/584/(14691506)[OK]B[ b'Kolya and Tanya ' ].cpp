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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL mod = 1e9+7;

LL mypow(LL a, LL b)
{
	LL r = 1;
	while(b)
	{
		if(b&1)r = r*a%mod;
		a = a*a%mod;
		b = b>>1;
	}
	return r;
}

int main()
{
ios_base::sync_with_stdio(0);
	LL n;
	cin>>n;
	cout<<(mod + mypow(3,3*n)-mypow(7,n))%mod;
	return 0;
}
