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
	int a,b;
	cin>>a>>b;
	for(int i = 1; i <= a; ++i)cout<<i<<' ';
	cout<<a+b+1;
	for(int i = a+b; i > a; --i)cout<<' '<<i;
	return 0;
}
