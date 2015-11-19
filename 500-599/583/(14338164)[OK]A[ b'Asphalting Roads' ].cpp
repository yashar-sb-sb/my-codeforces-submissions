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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool A[51],B[51];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b;
	cin>>n;n=n*n+1;
	for(int i = 1; i < n; ++i)
	{
		cin>>a>>b;
		if(!A[a] && !B[b])
		{
			cout<<i<<' ';
			A[a] = B[b] = true;
		}
	}
	return 0;
}
