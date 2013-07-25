#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[101][101];
int main()
{
ios_base::sync_with_stdio(0);
	int n,m,max,c=0;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	for(int i = 0; i < m; ++i)
	{
		max = A[0][i];
		for(int j = 1; j < n; ++j)
		{
			if(A[j][i]>max)
			{
				max = A[j][i];
			}
		}
		A[100][i] = max;
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if(A[i][j]==A[100][j])
			{
				++c;
				break;
			}
		}
	}
	cout<<c;
	return 0;
}