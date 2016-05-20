#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[5][50000], T[50000];


int main()
{
ios_base::sync_with_stdio(0);
	int m, n;
	cin>>m>>n;
	for(int i = 0; i < m; ++i)
	{
		for(int j = 0; j < n; ++j)cin>>A[j][i];
	}
	for(int i = 0; i < n; ++i)
	{
		T[0] += A[i][0];
		for(int j = 1; j < m; ++j)
		{
			T[j] = max(T[j],T[j-1])+A[i][j];
		}
	}
	for(int i = 0; i < m; ++i)cout<<T[i]<<' ';
	return 0;
}
