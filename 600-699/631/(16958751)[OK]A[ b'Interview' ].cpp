#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n, t, a = 0, b = 0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>t;
		a |= t;
	}
	for(int i = 0; i < n; ++i)
	{
		cin>>t;
		b |= t;
	}
	cout<<a+b;
	return 0;
}
