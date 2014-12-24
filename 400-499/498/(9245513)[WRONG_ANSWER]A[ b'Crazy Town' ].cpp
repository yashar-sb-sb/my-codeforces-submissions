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
	int res = 0,x1,y1,x2,y2,n,a,b,c;
	cin>>x1>>y1>>x2>>y2>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		if((a*x1+b*y1+c>0 && a*x2+b*y2+c<0)||(a*x1+b*y1+c<0 && a*x2+b*y2+c>0))++res;
	}
	cout<<res;
	return 0;
}
