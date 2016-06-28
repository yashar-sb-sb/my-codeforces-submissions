#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	for(int i = 1; i <= k; ++i)
	{
		cout<<i*2<<' '<<i*2-1<<' ';
	}
	for(int i = k + 1; i <= n; ++i)
		cout<<i*2-1<<' '<<i*2<<' ';
	return 0;
}
