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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[102][102];

void dfs(int i, int j, char c)
{
	if(A[i][j]!='.')return;
	A[i][j] = c;
	c = c == 'W'?'B':'W';
	dfs(i,j+1,c);
	dfs(i,j-1,c);
	dfs(i-1,j,c);
	dfs(i+1,j,c);
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	for(int i = 0; i <= n+1; ++i)
	{
		for(int j = 0; j <= m+1; ++j)
		{
			if(i==0 || i == n+1 || j == 0 || j == m+1)
			{
				A[i][j] = '-';
			}
			else
			{
				cin>>A[i][j];
			}
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			dfs(i,j,'W');
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			cout<<A[i][j];
		}
		cout<<'\n';
	}
	return 0;
}