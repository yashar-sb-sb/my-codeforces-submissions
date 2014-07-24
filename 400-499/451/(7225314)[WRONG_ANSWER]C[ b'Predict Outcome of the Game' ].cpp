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
	int t;
	LL n,k,d1,d2,a,b,c,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>d1>>d2;
		a = d1+d2;
		b = d2;
		c = 0;
		d = k - a - b - c;
		a+=d/3;
		b+=d/3;
		c+=d/3;
		
		cout<<((d>=0 && d%3 == 0 && n%3 == 0 && a<=n/3)?"yes\n":"no\n");
	}
	return 0;
}