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

LL A[100001];

int main()
{
ios_base::sync_with_stdio(0);
	int t,k,a,b;
	cin>>t>>k;
	A[0] = 1;
	for(int i = 1; i < 100001; ++i)
	{
		if(i>=k)
		{
			A[i] = A[i-1]+A[i-k];
		}
		else
		{
			A[i] = A[i-1];
		}
		A[i] = A[i]%1000000007;
	}
	for(int i = 1; i < 100001; ++i)
	{
		A[i] = (A[i]+A[i-1])%1000000007;
	}
	while(t--)
	{
		cin>>a>>b;
		--a;
		cout<<(A[b]-A[a]+1000000007)%1000000007<<'\n';
	}
	return 0;
}