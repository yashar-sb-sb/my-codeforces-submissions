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
	string s;
	char k = '0';
	cin>>s;
	for(int i = 0; i < s.size(); ++i)k = max(k,s[i]);
	cout<<k<<'\n';
	k -= '0';
	for(int i = 0; i < k; ++i)
	{
		int j = 0;
		while(s[j]<'1')++j;
		for(; j < s.size(); ++j)cout<<(s[j]>'0'?'1':'0');cout<<'\n';
		for(int j = 0; j < s.size(); ++j)--s[j];
	}
	return 0;
}
