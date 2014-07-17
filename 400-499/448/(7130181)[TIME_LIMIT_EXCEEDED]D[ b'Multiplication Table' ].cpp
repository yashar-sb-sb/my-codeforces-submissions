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

#include<conio.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL n,m,k;
	cin>>n>>m>>k;
	LL l=0,r = 5e10,det,d=0,dd=0;
	while(!(d<k&&dd>=k))
	{
		det = (l+r)/2;
		d=0;
		dd=0;
		for(int i = 1; i <= n; ++i)
		{
			d+=min((det-1)/i,m);
			dd+=min(det/i,m);
		}
		if(d+dd>k+k)r=det-1;
		else if(dd+d<k+k)l=det+1;
	}
	cout<<det;
	return 0;
}