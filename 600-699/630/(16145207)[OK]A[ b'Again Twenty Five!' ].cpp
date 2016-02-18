#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL pow(LL n)
{
	if(!n)return 1;
	int t = 1;
	if(n&1)t = 5;
	int res = pow(n>>1);
	return res*res%100*t%100;
}

int main()
{
ios_base::sync_with_stdio(0);
	LL a;
	cin>>a;
	a = pow(a);
	cout<<a/10<<a%10;
	return 0;
}