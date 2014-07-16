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
	string s;
	char c=0;
	cin>>s;
	int co=0,l=s.size();
	for(int i = 0; i < l; ++i)
	{
		if(s[i]>c)
		{
			co=1;
			c=s[i];
		}
		else if(s[i]==c)++co;
	}
	while(co--)cout<<c;
	return 0;
}