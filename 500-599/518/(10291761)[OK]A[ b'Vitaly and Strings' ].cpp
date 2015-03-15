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
	string s,t;
	cin>>s>>t;
	++s[s.size()-1];
	for(int i = s.size() - 1; i > 0; --i)
	{
		s[i-1]+=s[i]/('z'+1);
		if(s[i]>'z')s[i]-=26;
	}
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i]<t[i])
		{
			cout<<s;
			return 0;
		}
	}
	cout<<"No such string";
	return 0;
}
