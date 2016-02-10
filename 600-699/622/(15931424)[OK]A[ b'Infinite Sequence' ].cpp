#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL i = 1;
	LL n;
	cin>>n;
	for(; n>0; ++i)
	{
		n -= i;
	}
	cout<<i + n - 1;
	return 0;
}
