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

char A[50][50];

bool f(int i, int j)
{
	bool F[26];
	F[(int)'f'-(int)'a'] = F[(int)'a'-(int)'a'] = F[(int)'c'-(int)'a'] = F[(int)'e'-(int)'a'] = false;
	for(int ii = 0; ii < 2; ++ii)
	{
		for(int jj = 0; jj < 2; ++jj)
		{
			if((int)A[ii+i][jj+j]<=(int)'z' && (int)A[ii+i][jj+j]>=(int)'a')F[(int)A[ii+i][jj+j]-(int)'a'] = true;
		}
	}
	return F[(int)'f'-(int)'a'] && F[(int)'a'-(int)'a'] && F[(int)'c'-(int)'a'] && F[(int)'e'-(int)'a'];
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,res = 0;
	cin>>n>>m;
	if(n==1 || m == 1){cout<<0; return 0;}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)cin>>A[i][j];
	}
	for(int i = 0; i < n-1; ++i)
	{
		for(int j = 0; j < m-1; ++j)res+=(int)f(i,j);
	}
	cout<<res;
	return 0;
}
