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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL x,res = 0, c=1;
	cin>>x;
	while(x)
	{
		res += (min(x%10,9-x%10)?min(x%10,9-x%10):9)*c;
		c*=10;
		x/=10;
	}
	cout<<res;
	return 0;
}
