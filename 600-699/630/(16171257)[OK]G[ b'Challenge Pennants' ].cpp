#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	uLL n,r=120,c=6;
	cin>>n;
	uLL a=1, b=1;
	for(uLL i = 0; i < 5; ++i)a*= n+i;
	for(uLL i = 0; i < 3; ++i)b*= n+i;
	a/=r;
	b/=c;
	cout<<a*b;
	return 0;
}