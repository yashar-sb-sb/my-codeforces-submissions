#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	int a=1,b=2*n+1,c=2*n+2,d=2;
	for(int i = 0; i < n; ++i)
	{
		if(b<=m)cout<<b<<' ';
		if(a<=m)cout<<a<<' ';
		if(c<=m)cout<<c<<' ';
		if(d<=m)cout<<d<<' ';
		a+=2;
		b+=2;
		c+=2;
		d+=2;
	}
	cout<<endl;
	return 0;
}
