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
	int s = 0, t = 1, res = 0;
	char c;
	while(cin>>c)
	{
		s = (s << 1) + (c=='7');
		res += t;
		t <<= 1;
	}
	cout<<s+res;
	return 0;
}
