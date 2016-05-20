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
	int i = 1;
	cout<<n;
	if(n==1)return 0;
	while(++i * i <= n)
	{
		while(!(n%i))n/=i,cout<<' '<<n;
	}
	if(n>1)cout<<" 1";cout<<"\n";
	return 0;
}
