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
	uLL a,b,mod = 10e9+7,res=0;
	cin>>a>>b;
	cout<<(((b*(b-1)/2)%mod)*(((((b*a)%mod)*(a+1)/2)%mod+a)%mod)%mod);
	return 0;
}