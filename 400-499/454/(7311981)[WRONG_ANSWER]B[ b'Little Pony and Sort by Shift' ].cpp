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

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
		if(A[m]>A[i])m=i;
	}
	for(int i = m; i%n!=(m+n-1)%n; ++i)
	{
		if(A[i]>A[(i+1)%n])
		{
			cout<<-1;
			return 0;
		}
	}
	cout<<(n-m)%n;
	return 0;
}