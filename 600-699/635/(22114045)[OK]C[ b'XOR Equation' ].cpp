#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL ans = 1,s,x;
	cin>>s>>x;
	if(x>s)return cout<<0,0;
	LL t = x;
	while(t)
	{
		if(t&1)ans*=2;
		t/=2;
	}
	if(s-x==0)ans-=2;
	if((((s-x)/2)&x)||(s-x)&1)return cout<<0,0;
	cout<<ans<<endl;
	return 0;
}