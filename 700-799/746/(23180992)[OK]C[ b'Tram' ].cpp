#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int p,d,s;
int f(int x)
{
	if((x-p)*d>=0)
	{
		int t = abs(x-p);
		p = x;
		return t;
	}
	if(d<0)
	{
		int t = p;
		d = 1;
		p = 0;
		return t + f(x);
	}
	else
	{
		int t = s - p;
		d = -1;
		p = s;
		return t + f(x);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	int x1,x2,t1,t2;
	cin>>s>>x1>>x2>>t1>>t2>>p>>d;
	int ttime = 0, itime = abs(x1-x2)*t2;
	ttime += f(x1)*t1 + f(x2)*t1;
	cout<<min(ttime,itime)<<endl;
	return 0;
}