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
	bool f;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>d1>>d2;
		if(d1<d2)swap(d1,d2);
		a = d1+d2;
		b = d2;
		c = 0;
		d = k - a - b - c;
		f=false;
		f|=(d%3==0 && a+b+c<=k && n%3 == 0 && a+d/3<=n/3);
		a = d1-d2;
		b = d2;
		c = 0;
		if(a<b)swap(a,b);
		d = k - a - b - c;
		f|=(d%3==0 && a+b+c<=k && n%3 == 0 && a+d/3<=n/3);
		a = d1;
		b = d1-d2;
		c = 0;
		d = k - a - b - c;
		f|=(d%3==0 && a+b+c<=k && n%3 == 0 && a+d/3<=n/3);
		cout<<(f?"yes\n":"no\n");
	}
	return 0;
}