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

int n,m,A[6];

int f()
{
	int s = 0;
	for(int i = 0; i < n; ++i)
	{
		for(int j = i; j < n; ++j)
		{
			int re = 6;
			for(int k = i; k <= j; ++k)
			{
				re = min(re, A[k]);
			}
			s+=re;
		}
	}
	return s;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>m;
	int ma = 0, cn=0;
	for(int i = 0; i < n; ++i)
	{
		A[i] = i + 1;
	}
	do
	{
		int t = f();
		if(t>ma)ma = t;
	} while ( std::next_permutation(A,A+n) );
	
	do
	{
		int t = f();
		if(t == ma)++cn;
		
		if(cn == m)break;
	} while ( std::next_permutation(A,A+n) );
	
	for(int i = 0; i < n; ++i)cout<<A[i]<<' ';
	return 0;
}
