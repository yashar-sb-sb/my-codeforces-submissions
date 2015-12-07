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

int main()
{
ios_base::sync_with_stdio(0);
	LL n,r=1;
	cin>>n;
	for(LL i = 2; i*i <= n; ++i)
	{
		if(n%i == 0)r *= i;
		while(n%i == 0)n /= i;
	}
	cout<<n*r;
	return 0;
}
