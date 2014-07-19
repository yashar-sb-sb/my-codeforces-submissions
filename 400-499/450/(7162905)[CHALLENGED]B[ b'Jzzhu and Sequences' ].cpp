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
	LL n,x,y,mod=1e9+7;
	cin>>x>>y>>n;
	if(n==1){cout<<(x%mod+mod)%mod;return 0;}
	if(n==2){cout<<(y%mod+mod)%mod;return 0;}
	LL x1=y,y1=y-x,tmp,i;
	for(i = 1; x1!=x || y1!=y; ++i)
	{
		tmp = x1;
		x1 = y1;
		y1 = y1-tmp;
	}
	n%=i;
	
	for(i = 2; i<n; ++i)
	{
		tmp = x;
		x = y;
		y = y-tmp;
	}
	cout<<(y%mod+mod)%mod;
	return 0;
}