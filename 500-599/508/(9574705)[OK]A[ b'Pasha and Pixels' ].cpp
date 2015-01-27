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

bool A[1002][1002];

#define test(i,j) (A[i][j] && A[i][j+1] && A[i+1][j] && A[i+1][j+1])

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k,a,b;
	cin>>n>>m>>k;
	for(int i = 0; i < k; ++i)
	{
		cin>>a>>b;
		A[a][b] = true;
		if(test(a,b) || test(a-1,b) || test(a,b-1) || test(a-1,b-1))
		{
			cout<<i+1;
			return 0;
		}
	}
	cout<<0;
	return 0;
}
