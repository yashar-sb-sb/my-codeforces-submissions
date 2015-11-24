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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL x=0,b,y=0,n,inp;
	cin>>n>>b;
	while(n--)
	{
		cin>>inp;
		x = x * b + inp;
	}
	cin>>n>>b;
	while(n--)
	{
		cin>>inp;
		y = y * b + inp;
	}
	if(x<y)cout<<'<';
	if(x==y)cout<<'=';
	if(x>y)cout<<'>';
	return 0;
}
