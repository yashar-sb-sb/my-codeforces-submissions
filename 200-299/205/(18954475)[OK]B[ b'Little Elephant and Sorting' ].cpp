#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a=0,b;
	LL r = 0;
	cin>>n;
	while(n--)
	{
		cin>>b;
		if(b<a)r+=a-b;
		a = b;
	}
	cout<<r<<endl;
	return 0;
}
