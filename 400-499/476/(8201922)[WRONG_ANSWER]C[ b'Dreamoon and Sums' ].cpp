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
	LL a,b,mod = 10e9+7,res=0;
	cin>>a>>b;
	for(LL i = 1; i < b; ++i)
	{
		res = (res+(((((a*(a+1)/2)%mod)*i)%mod)*b)%mod+(a*i)%mod)%mod;//[1...a]*i*b+a*i
	}
	cout<<res;
	return 0;
}