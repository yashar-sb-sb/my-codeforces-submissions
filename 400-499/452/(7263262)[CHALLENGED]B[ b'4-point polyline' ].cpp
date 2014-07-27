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
	int n,m,a1,a2,b1,b2,c1,c2,d1,d2;
	cin>>n>>m;
	if(n)
	{
		a1=1;
		a2=0;
	}
	else
	{
		a1=0;
		a2=1;
	}
	b1=n;
	b2=m;
	c1=0;
	c2=0;
	if(n)
	{
		d1=n-1;
		d2=m;
	}
	else
	{
		d1=n;
		d2=m-1;
	}
	if(n&&m&&sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2))+sqrt((c1-b1)*(c1-b1)+(c2-b2)*(c2-b2))+sqrt((c1-d1)*(c1-d1)+(c2-d2)*(c2-d2))<2*sqrt(n*n+m*m)+max(n,m))
	{
		cout<<"0 0\n"
			<<n<<' '<<m<<'\n';
		if(n>m)
		{
			cout<<"0 "<<m<<'\n'
				<<n<<" 0";
		}
		else
		{
			cout<<n<<" 0\n"
				<<"0 "<<m;
		}
	}
	else
	{
		cout<<a1<<' '<<a2<<'\n'
			<<b1<<' '<<b2<<'\n'
			<<c1<<' '<<c2<<'\n'
			<<d1<<' '<<d2;
	}
	return 0;
}