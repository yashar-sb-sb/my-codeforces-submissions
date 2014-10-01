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

int A[100], B[100], C[100], P[100];
bool f[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i]>>B[i]>>C[i]>>P[i];
		f[i]=true;
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(A[i]<A[j] && B[i] < B[j] && C[i] < C[j])
			{
				f[i] = false;
				break;
			}
		}
	}
	int res = -1;
	while(!f[++res]);
	for(int i = res+1; i < n; ++i)if(f[i]&&P[i]<P[res])res=i;
	cout<<res+1;
	return 0;
}