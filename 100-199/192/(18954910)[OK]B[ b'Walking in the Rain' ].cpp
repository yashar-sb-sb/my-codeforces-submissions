#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int res,n,a,b;
	cin>>n;
	cin>>a;
	if(n==1)return cout<<a,0;
	res = a;
	while(--n)
	{
		cin>>b;
		res = min(res,max(a,b));
		a = b;
	}
	cout<<min(res,a)<<endl;
	return 0;
}
