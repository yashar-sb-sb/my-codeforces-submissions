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
	int a,b,c,d,m,v;
	cin>>a>>b>>c>>d;
	m = max(3*a/10,a-c*a/250);
	v = max(3*b/10,b-d*b/250);
	if(m>v)cout<<"Misha";
	else if(m<v)cout<<"Vasya";
	else cout<<"Tie";
	return 0;
}
