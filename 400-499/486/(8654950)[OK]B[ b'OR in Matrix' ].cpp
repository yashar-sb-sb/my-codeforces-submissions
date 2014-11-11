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

int B[100][100],R[100],C[100],A[100][100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>B[i][j];
			if(B[i][j])
			{
				++R[i];
				++C[j];
			}
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			A[i][j] = 0;
			if(R[i] == m && C[j] == n)
			{
				A[i][j] = 1;
			}
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			R[i]=0;
			C[j]=0;
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if(A[i][j])
			{
				++R[i];
				++C[j];
			}
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if((B[i][j] && !(R[i]+C[j]))||(!B[i][j] && (R[i]+C[j])))
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES\n";
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cout<<A[i][j]<<' ';
		}
		cout<<'\n';
	}
	return 0;
}