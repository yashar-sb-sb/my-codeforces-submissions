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

char A[50][50];

int main()
{
ios_base::sync_with_stdio(0);
	int l=49,r=0,u=49,d=0;
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>A[i][j];
			if(A[i][j]=='*')
			{
				if(j<l)l=j;
				if(j>r)r=j;
				if(i<u)u=i;
				if(i>d)d=i;
			}
		}
	}
	++r;
	++d;
	for(int i = u; i < d; ++i)
	{
		for(int j = l; j < r; ++j)
		{
			cout<<A[i][j];
		}
		cout<<'\n';
	}
	return 0;
}