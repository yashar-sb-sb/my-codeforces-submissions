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

uLL n;

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n;
	cout<<(n-3)*(n-4)+3*(n-3)+1;
	return 0;
}
