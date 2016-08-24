#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[30][30];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	char ch;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			cin>>ch;
			A[i][j] = ch == '1';
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			A[i][j] += A[i-1][j] + A[i][j-1] - A[i-1][j-1];
		}
	}
	int ma = 0;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			for(int ii = i; ii <= n; ++ii)
			{
				for(int jj = j; jj <= m; ++jj)
				{
					if(A[ii][j-1] + A[i-1][jj] - A[i-1][j-1] == A[ii][jj])
						ma = max(ma,4+2*(ii+jj-i-j));
				}
			}
		}
	}
	cout<<ma<<endl;
}