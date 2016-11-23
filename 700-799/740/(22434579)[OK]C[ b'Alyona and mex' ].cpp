#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int A[101];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,b;
	cin>>n>>m;
	int mod = n;
	while(m--)
	{
		cin>>a>>b;
		mod = min(mod,b-a+1);
	}
	cout<<mod<<endl;
	for(int i = 0; i < n; ++i)
	{
		cout<<i%mod<<' ';
	}cout<<endl;
	return 0;
}