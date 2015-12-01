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

int L[3],R[3];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < 3; ++i)cin>>L[i]>>R[i];
	for(int i = 2; i > 0; --i)
	{
		 n -= L[i];
	}
	L[0] = 0;
	for(int i = 0; i < 3; ++i)
	{
		n += L[i];
		L[i] = min(n, R[i]);
		n -= L[i];
	}
	for(int i = 0; i < 3; ++i)cout<<L[i]<<' ';
	return 0;
}
