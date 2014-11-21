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
	for(int i = 0; i < 201; ++i)
	{
		for(int j = 0; j < 201; ++j)
		{
			for(int k = 0; k < 201; ++k)
			{
				if(ma-yd-k==0 || (yh+i)/(ma-yd-k)+((yh+i)%(ma-yd-k)>0)>mh/(ya+j-md)+(mh%(ya+j-md)>0)){m = min(i*h+j*a+k*d,m);}
			}
		}
	}
	cout<<m+p;
	return 0;
}
