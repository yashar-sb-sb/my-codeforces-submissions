#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int L(int i)
{
	int k = 1;
	while(k<=i)k = k<<1;
	return k>>1;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n, b, c;
	cin>>n>>b>>c;
	int a = n;
	int r = 0,i=0;
	while(a>1)
	{
		int t = L(a);
		r+=t;
		a-=t/2;
	}
	cout<<b*r + r/2<<' '<<n*c;
	return 0;
}