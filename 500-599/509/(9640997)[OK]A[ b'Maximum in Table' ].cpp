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

int A[10][10];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	for(int i = 0; i < 10; ++i)
	{
		for(int j = 0; j < 10; ++j)
		{
			if(!j || !i)A[i][j] = 1;
			else A[i][j] = A[i-1][j] + A[i][j-1];
		}
	}
	cin>>n;
	cout<<A[n-1][n-1];
	return 0;
}
