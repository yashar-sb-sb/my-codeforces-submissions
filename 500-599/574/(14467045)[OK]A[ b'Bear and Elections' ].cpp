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

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a;
	cin>>n>>a;
	--n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = 0; i < 10000; ++i)
	{
		int m = 0;
		for(int j = 0; j < n; ++j)
		{
			if(A[m]<A[j])m=j;
		}
		if(A[m]<a)
		{
			cout<<i;
			return 0;
		}
		++a;
		--A[m];
	}
	return 0;
}
