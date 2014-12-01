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

int A[1002];

int main()
{
ios_base::sync_with_stdio(0);
	int n,l;
	cin>>n>>l;
	ldb d=0;
	A[0] = 0;
	A[1] = l;
	for(int i = 2; i < n+2; ++i)cin>>A[i];
	sort(A,A+n+2);
	for(int i = 1; i < n; ++i)d = max(d,(ldb) A[i] - A[i-1]);
	cout<<std::fixed<<setprecision(10)<<max(d/2.0,max((ldb)A[1],(ldb)(l-A[n])));
	return 0;
}
