#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	uLL l,r,k,t;
	cin>>l>>r>>k;
	bool f = true;
	t = 1;
	while(t<=r)
	{
		if(t>=l)f = false, (cout<<t<<' ');
		if(t*k/k != t || t*k%k)break;
		t *= k;
	}
	if(f)cout<<-1;
	return 0;
}
