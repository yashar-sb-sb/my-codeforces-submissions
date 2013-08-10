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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,A[100][100];
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			A[(j+i)%n][j] = j*n + i + 1;
		}
	}
	cout<<A[0][0];
	for(int i = 1; i < n; ++i)
	{
		cout<<' '<<A[0][i];
	}
	for(int i = 1; i < n; ++i)
	{
		cout<<'\n'<<A[i][0];
		for(int j = 1; j < n; ++j)
		{
			cout<<' '<<A[i][j];
		}
	}
	return 0;
}