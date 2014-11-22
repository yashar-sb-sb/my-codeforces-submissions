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
	int a,i,t;
	cin>>a;
	++a;
	for(i = 1; true; ++i, ++a)
	{
		t = a>0?a:-a;
		while(t && t%10!=8)t/=10;
		if(t%10==8)break;
	}
	cout<<i;
	return 0;
}
