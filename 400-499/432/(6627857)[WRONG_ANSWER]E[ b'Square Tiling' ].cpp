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

char A[100][100];
int n,m;

void f(int i, int j)
{
	if(i >= n || j >= m)return;
	int d[3] ={0,0,0};
	if(i>0)d[A[i-1][j]-'A'] = 1;
	if(j>0)d[A[i][j-1]-'A'] = 1;
	int t;
	for(t = 0; d[t]; ++t);
	char c = 'A'+t;
	int k = min(n-i,m-j);
	for(int ii = i; ii < i+k; ++ii)
	{
		for(int jj = j; jj < j+k; ++jj)
		{
			A[ii][jj] = c;
		}
	}
	if(k == n - i)
	{
		f(i,j+k);
	}
	else if(k == m - j)
	{
		f(i+k,j);
	}
	return;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>m;
	f(0,0);
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)cout<<A[i][j];
		cout<<'\n';
	}
	return 0;
}