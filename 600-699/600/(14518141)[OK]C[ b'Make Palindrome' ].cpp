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

int A[26];

int main()
{
ios_base::sync_with_stdio(0);
	char c;
	while(cin>>c)++A[c-'a'];
	int l = 0, r = 25;
	while(l < 26 && !(A[l]&1))++l;
	while(r > -1 && !(A[r]&1))--r;
	while(l<r)
	{
		--A[r];
		++A[l];
		while(l < 26 && !(A[l]&1))++l;
		while(r > -1 && !(A[r]&1))--r;
	}
	for(int i = 0; i < 26; ++i)
	{
		for(int j = 0; j < A[i]/2; ++j)cout<<(char)('a'+i);
	}
	
	if(l == r)cout<<(char)('a'+l);
	
	for(int i = 25; i > -1; --i)
	{
		for(int j = 0; j < A[i]/2; ++j)cout<<(char)('a'+i);
	}
	return 0;
}