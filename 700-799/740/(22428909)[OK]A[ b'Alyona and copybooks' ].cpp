#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL n,a,b,c;
	cin>>n>>a>>b>>c;
	n = n%4;
	LL ans = 1e18;
	for(LL i = 0; i < 10; ++i)
		for(LL j = 0; j < 10; ++j)
			for(LL k = 0; k < 10; ++k)
				if((n+i+2*j+3*k)%4==0)
					ans = min(ans, i*a + j*b + k*c);
	cout<<ans<<endl;
	return 0;
}