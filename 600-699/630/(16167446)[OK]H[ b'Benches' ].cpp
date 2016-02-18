#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	uLL n, r = 1;
	cin>>n;
	for(uLL i = 0; i < 5; ++i)r*= (n-i);
	n = 120;
	cout<<r/n*r;
	return 0;
}