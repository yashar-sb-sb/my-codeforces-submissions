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

#define mod 1e9+7

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL n,x,y;
	cin>>x>>y>>n;
	switch(n%6)
	{
		case 0:cout<<((x-y)%mod+mod)%mod;break;
		case 1:cout<<((x)%mod+mod)%mod;break;
		case 2:cout<<((y)%mod+mod)%mod;break;
		case 3:cout<<((y-x)%mod+mod)%mod;break;
		case 4:cout<<((-x)%mod+mod)%mod;break;
		case 5:cout<<((-y)%mod+mod)%mod;break;
	}
	return 0;
}