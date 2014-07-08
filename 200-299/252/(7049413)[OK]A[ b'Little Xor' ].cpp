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

int A[101];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m=0;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
		A[i]^=A[i-1];
	}
	for(int i = 0; i < n; ++ i)
	{
		for(int j = i + 1; j <= n; ++j)
		{
			m = max(m, A[i]^A[j]);
		}
	}
	cout<<m;
	return 0;
}