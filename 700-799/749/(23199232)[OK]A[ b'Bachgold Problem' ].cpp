#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;



int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	cout<<n/2<<endl;
	if(n&1)
	{
		cout<<3<<' ';
		n-=3;
	}
	while(n)
	{
		cout<<2<<' ';
		n-=2;
	}
	return 0;
}