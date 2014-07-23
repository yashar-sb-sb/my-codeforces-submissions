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
	int r1,r2,c1,c2,d1,d2,a,b,c,d;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	b=(r1+c2-d1)/2;
	a=r1-b;
	c=c1-a;
	d=c2-b;
	if(0<a && a<10 && 0<b && b<10  && 0<c && c<10 && 0<d && d<10 && r1==a+b && r2==c+d && c1==a+c && c2==b+d && d1==a+d && d2==b+c && a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)cout<<a<<' '<<b<<'\n'<<c<<' '<<d;
	else cout<<-1;
	return 0;
}