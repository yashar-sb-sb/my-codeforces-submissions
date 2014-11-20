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

int main()
{
ios_base::sync_with_stdio(0);
	LL n,m;
	cin>>n>>m;
	cout<<(m-n%m)*n/m*(n/m-1)/2+n%m*n/m*(n/m+1)/2<<' '<<(n-m)*(n-m+1)/2;
	return 0;
}
