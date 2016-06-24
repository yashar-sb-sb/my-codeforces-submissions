#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c,d,g,ab,cd;
	cin>>a>>b>>c>>d;
	ab = a*b;
	cd = c*d;
	g = __gcd(ab,cd);
	ab/=g;
	cd/=g;
	g = __gcd(a,c);
	a/=g;
	c/=g;
	g = __gcd(b,d);
	b/=g;
	d/=g;
	if(a*d<b*c)
		cd*=a*a, ab*=c*c;
	else
		cd*=b*b, ab*=d*d;
	cd = ab - cd;
	g = __gcd(ab,cd);
	ab/=g;
	cd/=g;
	cout<<cd<<'/'<<ab<<endl;
	return 0;
}
