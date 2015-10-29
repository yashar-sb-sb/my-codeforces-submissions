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

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	cout<<A[1]-A[0]<<' '<<A[n-1]-A[0];
	for(int i = 1; i < n-1; ++i)cout<<'\n'<<min(A[i]-A[i-1],A[i+1]-A[i])<<' '<<max(A[n-1]-A[i],A[i]-A[0]);
	cout<<'\n'<<A[n-1]-A[n-2]<<' '<<A[n-1]-A[0];
	return 0;
}
