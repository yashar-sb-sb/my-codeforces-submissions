#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;


int main()
{
ios_base::sync_with_stdio(0);
	int n,b,d,inp,t=0,r=0;
	cin>>n>>b>>d;
	while(n--)
	{
		cin>>inp;
		if(inp>b)continue;
		t+=inp;
		if(t>d)t = 0, ++r;
	}
	if(t>d)t = 0, ++r;
	cout<<r<<endl;
	return 0;
}