#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int B[100],G[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,i=0,j=0;
	cin>>n>>m;
	int c,inp;

	cin>>c;
	for(int k = 0; k < c; ++k)
	{
		cin>>inp;
		B[inp] = 1;
	}
	cin>>c;
	for(int k = 0; k < c; ++k)
	{
		cin>>inp;
		G[inp] = 1;
	}

	bool f;
	do
	{
		f = false;
		do
		{
			f |= B[i] + G[j] == 1;
			B[i] = G[j] = B[i] | G[j];
			i = (i+1)%n;
			j = (j+1)%m;
		}
		while(i | j);
	}
	while(f);

	for(int i = 0; i < n; ++i)
	{
		if(!B[i])
		{
			cout<<"No\n";
			return 0;
		}
	}
	for(int i = 0; i < m; ++i)
	{
		if(!G[i])
		{
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
}
