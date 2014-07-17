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
	int a=0,b=0,n;
	cin>>n;
	a+=n;
	cin>>n;
	a+=n;
	cin>>n;
	a+=n;
	
	cin>>n;
	b+=n;
	cin>>n;
	b+=n;
	cin>>n;
	b+=n;
	
	cin>>n;
	cout<<(ceil((double)a/5)+ceil((double)b/10)<=n?"YES":"NO");
	return 0;
}