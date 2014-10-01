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

int main()
{
ios_base::sync_with_stdio(0);
	int n=0,l,c;
	string s;
	cin>>s;
	l = s.size();
	for(int i = 0; i < l; ++i)n+=s[i]-'0';
	if(l==1)l=0;
	else l=1;
	while(n/10)
	{
		c=0;
		while(n)
		{
			c+=n%10;
			n/=10;
		}
		++l;
		n = c;
	}
	cout<<l;
	return 0;
}