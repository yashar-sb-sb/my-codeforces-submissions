#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL a,b,c,d;
	cin>>a>>b>>c>>d;
	LL k = min(a,min(c,d));
	a -= k;
	cout<<k*256LL+LL(min(a,b))*32LL;
	return 0;
}