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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int c=0,x,y,a,b,A[10000][2];
	cin>>x>>y>>a>>b;
	for(int i = max(a-1,b)+1; i <= x; ++i)
	{
		for(int j = b; j < i && j <= y; ++j)
		{
			A[c][0]=i;
			A[c++][1] = j;
		}
	}
	cout<<c<<'\n';
	for(int i = 0; i < c; ++i)
	{
		cout<<A[i][0]<<' '<<A[i][1]<<'\n';
	}
	return 0;
}