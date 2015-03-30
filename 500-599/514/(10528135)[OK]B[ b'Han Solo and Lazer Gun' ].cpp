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

int _gcd(int a, int b)
{
	return b ? _gcd(b,a%b) : a;
}

int gcd(int a, int b)
{
	return a>b ? _gcd(a,b) : _gcd(b,a);
}

map<int,bool> m;

int main()
{
ios_base::sync_with_stdio(0);
	int n,x,y,a,b,res=0,r,t;
	cin>>n>>x>>y;
	while(n--)
	{
		cin>>a>>b;
		if(b==y)r=0;
		else if(a==x)r=1;
		else {t = gcd(abs(a-x),abs(b-y)); if(a-x<0)r = (x-a)/t*10000+(y-b)/t; else r = (a-x)/t*10000+(b-y)/t; };
		if(!m[r])++res,m[r]=true;
	}
	cout<<res;
	return 0;
}
