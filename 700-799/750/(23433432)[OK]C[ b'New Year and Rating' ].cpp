#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL l=-1e18,r=1e18;

int main()
{
	ios_base::sync_with_stdio(0);
	int n,t,div;
	cin>>n;
	while(n--)
	{
		cin>>t>>div;
		if(div == 1)l = max(1900LL,l);
		else if(div == 2)r = min(1899LL,r);
		l += t;
		r += t;
	}
	if(r<l)cout<<"Impossible";
	else if(r>1e17)cout<<"Infinity";
	else cout<<r;
	cout<<endl;
	return 0;
}