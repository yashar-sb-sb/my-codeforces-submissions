#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n, k;

#define f (k ? (--k, 'L') : 'S')

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>k;
	if(k>n*n/2 + (n&1))
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES\n";
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cout<<f;
			++j;
			if(j<n)cout<<'S';
		}
		cout<<'\n';
		++i;
		if(i<n)for(int j = 0; j < n; ++j)
		{
			cout<<'S';
			++j;
			if(j<n)cout<<f;
		}
		cout<<'\n';
	}
	return 0;
}
