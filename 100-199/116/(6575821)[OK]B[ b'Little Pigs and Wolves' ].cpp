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

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,s=0;
	char A[12][12];
	cin>>n>>m;
	++n;++m;
	for(int i = 0; i <= n; ++i)
	{
		for(int j = 0; j <= m; ++j)
		{
			if(i == 0 || i == n || j == 0 || j == m)A[i][j]='.';
			else cin>>A[i][j];
		}
	}
	for(int i = 1; i < n; ++i)
	{
		for(int j = 1; j < m; ++j)
		{
			if(A[i][j] == 'W'&&(A[i+1][j]=='P'||A[i][j+1]=='P'||A[i-1][j]=='P'||A[i][j-1]=='P'))++s;
		}
	}
	cout<<s;
	return 0;
}