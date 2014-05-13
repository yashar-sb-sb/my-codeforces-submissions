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
	int n,m,t;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>t;
			if(t&&(!i||!j||i==n-1||j==m-1))
			{
				cout<<2;
				return 0;
			}
		}
	}
	cout<<4;
	return 0;
}