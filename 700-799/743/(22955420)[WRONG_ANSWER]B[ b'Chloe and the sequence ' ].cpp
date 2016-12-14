#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL solve(LL n, LL k)
{
	if(k == (1LL<<n-1LL))return n;
	if(k < (1LL<<n-1LL))return solve(n-1LL,k);
	return solve(n-1LL,k-(1LL<<n-1LL)-1LL);
}

int main()
{
	LL n,k;
	cin>>n>>k;
	cout<<solve(n,k)<<endl;
	return 0;
}