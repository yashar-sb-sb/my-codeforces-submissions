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
	int n, c = 0;
	string s,t;
	cin>>s>>t;
	n = s.size();
	for(int i = 0; i < n; ++i)c += s[i] != t[i];
	if(c&1){cout<<"impossible";return 0;}
	int i;
	c>>=1;
	for(i = 0; c; ++i)
	{
		cout<<s[i];
		if(s[i]!=t[i])--c;
	}
	for(; i < n; ++i)cout<<t[i];
	return 0;
}
