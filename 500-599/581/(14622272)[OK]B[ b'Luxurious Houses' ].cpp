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

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m = 0,a;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = n - 1; i > -1; --i)
	{
		a = max(m,A[i]-1)+1;
		m = max(m, A[i]);
		A[i] = a - A[i];
	}
	for(int i = 0; i < n; ++i)cout<<A[i]<<' ';
	return 0;
}
