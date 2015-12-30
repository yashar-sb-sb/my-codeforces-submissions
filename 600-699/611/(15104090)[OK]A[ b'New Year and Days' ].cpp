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

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string s;
	cin>>n>>s>>s;
	if(s[0] == 'w')
	{
		cout<<52+(int)(n == 5 || n == 6);
	}
	else
	{
		int r = 0;
		if(n<=29)r+=1;
		if(n<=30)r+=4;
		if(n<=31)r+=7;
		cout<<r;
	}
	return 0;
}
