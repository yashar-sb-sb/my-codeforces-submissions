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

int A[100][100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>A[i][j];
		}
	}
	int k = n;
	while(!(k%2))
	{
		k/=2;
		for(int i = 0; i < k; ++i)
		{
			for(int j = 0; j < m; ++j)
			{
				if(A[i][j]!=A[2*k-1-i][j]){cout<<2*k;return 0;}
			}
		}
	}
	cout<<k;
	return 0;
}