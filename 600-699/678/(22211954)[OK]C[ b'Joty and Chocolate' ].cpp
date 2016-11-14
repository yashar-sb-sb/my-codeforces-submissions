#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

LL gcd(LL a, LL b)
{
	return b?gcd(b,a%b):a;
}

int main()
{
ios_base::sync_with_stdio(0);
	LL n, a, b, p, q;
	cin>>n>>a>>b>>p>>q;
	if(q>p)swap(a,b),swap(p,q);
	LL lcm = a*b/gcd(max(a,b),min(a,b));
	cout<<n/a*p+(n/b-n/lcm)*q<<endl;
	return 0;
}