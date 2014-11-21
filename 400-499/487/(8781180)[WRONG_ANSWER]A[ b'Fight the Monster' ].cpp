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
	int yh,ya,yd,mh,ma,md,h,a,d,p;
	cin>>yh>>ya>>yd>>mh>>ma>>md>>h>>a>>d;
	p = a*max(0,md-ya+1);
	ya+=p/max(a,1);
	int m=1000000007;
	if(ma<=yd){cout<<p; return 0;}
	for(int i = 0; i < 1000; ++i)
	{
		if((yh+i)/(ma-yd)+((yh+i)%(ma-yd)>0)>mh/(ya-md)+(mh%(ya-md)>0)){m = min(i*h,m);break;}
	}
	for(int i = 0; i < 1000; ++i)
	{
		if((yh)/(ma-yd)+((yh)%(ma-yd)>0)>mh/(ya+i-md)+(mh%(ya+i-md)>0)){m = min(i*a,m);break;}
	}
	for(int i = 0; i < 1000; ++i)
	{
		if(ma-yd-i==0 || (yh+i)/(ma-yd-i)+((yh+i)%(ma-yd-i)>0)>mh/(ya-md)+(mh%(ya-md)>0)){m = min(i*d,m);break;}
	}
	cout<<m+p;
	return 0;
}
