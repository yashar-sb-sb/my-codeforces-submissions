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

char A[102][102]={};

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 1; i < n+1; ++i)
	{
		for(int j = 1; j < n+1; ++j)
		{
			cin>>A[i][j];
		}
	}
	for(int i = 1; i < n+1; ++i)
	{
		for(int j = 1; j < n+1; ++j)
		{
			if(((A[i+1][j]=='o')+(A[i-1][j]=='o')+(A[i][j+1]=='o')+(A[i][j-1]=='o'))&1)
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}