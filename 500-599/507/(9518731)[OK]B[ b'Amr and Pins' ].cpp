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

LL r,x,y,xx,yy;

int main()
{
ios_base::sync_with_stdio(0);
	cin>>r>>x>>y>>xx>>yy;
	LL res = ((x-xx)*(x-xx)+(y-yy)*(y-yy))/r/r/4+(((x-xx)*(x-xx)+(y-yy)*(y-yy))%(4*r*r)>0);
	LL re = sqrt(res);
	if(re*re == res)cout<<re;
	else cout<<re+1;
	return 0;
}
