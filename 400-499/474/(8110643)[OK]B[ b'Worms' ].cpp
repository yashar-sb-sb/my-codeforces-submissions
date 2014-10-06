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

int A[1000001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,i,a=1;
	cin>>n;
	for(int j = 1; j <= n; ++j)
	{
		cin>>i;
		while(i--)A[a++] = j;
	}
	cin>>n;
	while(n--)
	{
		cin>>i;
		cout<<A[i]<<'\n';
	}
	return 0;
}