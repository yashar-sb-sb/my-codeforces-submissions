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

int n,k,su=0,cu = 0;
int *A = new int[6];

void f(int *B,int d=0)
{
	if(d == k)
	{
		for(int i = 0; i < n; ++i)
		{
			for(int j = i+1; j < n; ++j)
			{
				if(B[i]>B[j])++su;
			}
		}
		++cu;
		return;
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = i; j < n; ++j)
		{
			int *D = new int[n];
			for(int k = 0; k < n; ++k)D[k] = B[k];
			for(int l = i, r = j; l < r; ++l, --r)
			{
				D[l] = B[r];
				D[r] = B[l];
			}
			f(D,d+1);
			delete [] D;
		}
	}
	return;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>k;
	for(int i = 0; i < n; ++i)cin>>A[i];
	f(A);
	cout<<setprecision(15)<<fixed<<((double)su)/((double)cu);
	return 0;
}
