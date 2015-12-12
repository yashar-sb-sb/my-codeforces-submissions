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
#include <string.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool F[26];

int main()
{
ios_base::sync_with_stdio(0);
	int k;
	string s;
	cin>>k>>s;
	for(int i = 0, j = -1; i < k; ++i)
	{
		while(++j < s.size() && F[s[j]-'a']);
		if(j >= s.size()){cout<<"NO"; return 0;}
		F[s[j]-'a'] = true;
	}
	memset(F, false, 26);
	int j = -1, r = 0;
	while(++j < s.size() && F[s[j]-'a']);
	F[s[j]-'a'] = true;
	cout<<"YES\n";
	for(int i = 1; i < k; ++i)
	{
		while(++j < s.size() && F[s[j]-'a']);
		F[s[j]-'a'] = true;
		for(; r < j; ++r)cout<<s[r]; cout<<'\n';
	}
	j = s.size();
	for(; r < j; ++r)cout<<s[r]; cout<<'\n';
	return 0;
}
