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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c,m=0;
	cin>>a>>b>>c;
	m = max(m,a+b+c);
	m = max(m,a*b+c);
	m = max(m,a*(b+c));
	m = max(m,a*b*c);
	m = max(m,a+b*c);
	m = max(m,(a+b)*c);
	cout<<m;
	return 0;
}