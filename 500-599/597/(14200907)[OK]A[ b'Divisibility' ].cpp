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

int main()
{
ios_base::sync_with_stdio(0);
	LL k,a,b;
	cin>>k>>a>>b;
	a+=(LL)1e18/k*k+k-1;
	b+=(LL)1e18/k*k+k;
	cout<<b/k-a/k;
	return 0;
}
