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
	string s;
	cin>>s;
	int i,j,ci,cj;
	for(i = 0, j = s.size()-1; i < j && s[i] == s[j]; ++i, --j);
	for(ci = i, cj = j - 1; ci < cj && s[ci] == s[cj]; ++ci, --cj);
	if(ci>=cj)
	{
		for(ci = 0; ci < i; ++ci)cout<<s[ci];
		cout<<s[j];
		cj = s.size();
		for(; ci < cj; ++ci)cout<<s[ci];
		return 0;
	}
	for(ci = i + 1, cj = j; ci < cj && s[ci] == s[cj]; ++ci, --cj);
	if(ci>=cj)
	{
		for(ci = 0; ci <= j; ++ci)cout<<s[ci];
		cout<<s[i];
		cj = s.size();
		for(; ci < cj; ++ci)cout<<s[ci];
		return 0;
	}
	cout<<"NA";
	return 0;
}
