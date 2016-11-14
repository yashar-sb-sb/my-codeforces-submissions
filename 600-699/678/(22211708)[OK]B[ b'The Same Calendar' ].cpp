#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

#define leap(x) (x%400==0||(x%4==0&&x%100))

int main()
{
ios_base::sync_with_stdio(0);
	int n,l,d=0,c;
	cin>>n;
	c = l = leap(n);
	do
	{
		d = (d+365+c)%7;
		++n;
		c = leap(n);
	}while(d||l!=c);
	cout<<n;
	return 0;
}