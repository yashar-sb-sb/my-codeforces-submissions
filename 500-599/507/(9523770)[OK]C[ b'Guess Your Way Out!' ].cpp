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

bool f = false;
LL h,n,c=0;

void fun(LL l, LL r,bool dir)
{
	if(f)return;
	if(l == n && r == n)
	{
		f=true;
		return;
	}
	if(n<l || n>r)
	{
		c+=(r-l)*2+1;
		return;
	}
	++c;
	if(dir)
	{
		fun(l,l+(r-l+1)/2-1,false);
		fun(l+(r-l+1)/2,r,true);
	}
	else
	{
		fun(l+(r-l+1)/2,r,true);
		fun(l,l+(r-l+1)/2-1,false);
	}
	return;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>h>>n;
	fun(1,(1LL)<<h,true);
	cout<<c;
	return 0;
}
