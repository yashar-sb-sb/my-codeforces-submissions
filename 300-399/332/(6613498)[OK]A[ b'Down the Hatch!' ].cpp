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
	int n,sum=0,c=0,i=0;
	string s;
	cin>>n>>s;
	while(i < s.size())
	{
		for(; i < s.size() && i%n; ++i)
		{
			if(s[i]==s[i-1])++c;
			else c=0;
		}
		if(i < s.size())
		{
			if(c>1)++sum;
			++i;
		}
	}
	cout<<sum;
	return 0;
}