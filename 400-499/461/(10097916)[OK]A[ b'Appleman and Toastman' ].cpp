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

int A[300000];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	LL s=0,t=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	if(n==1)return (cout<<A[0],0);
	sort(A,A+n);
	t = A[n-1];
	for(int i = n-2; i > -1; --i)t+=A[i],s+=t;
	cout<<s+t;
	return 0;
}
