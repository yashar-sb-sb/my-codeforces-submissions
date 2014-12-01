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
	ldb d=0,t=0;
	A[0] = 0;
	A[1] = l;
	for(int i = 2; i < n+2; ++i)cin>>A[i];
	sort(A,A+n+2);
	t = d = A[1];
	t += d;
	for(int i = 1; i < n + 1; ++i)
	{
		d = max(d,max((ldb)(A[i+1]-A[i])/2.0,(ldb)A[i]-t));
		t = A[i] + d;
	}
	d = max(d,(ldb)l-A[n]);
	cout<<std::fixed<<setprecision(10)<<d;
	return 0;
}
