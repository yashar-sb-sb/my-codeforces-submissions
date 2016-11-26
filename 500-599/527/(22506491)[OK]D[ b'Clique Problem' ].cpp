#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

pii S[200000];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,a,b;
	cin>>n;
	for(LL i = 0; i < n; ++i)
	{
		cin>>a>>b;
		S[i].first = a+b;
		S[i].second = a-b;
	}
	sort(S,S+n);
	LL ans = 0;
	int m = -1e9-1;
	for(LL i = 0; i < n; ++i)
	{
		if(S[i].second>=m)
		{
			++ans;
			m = S[i].first;
		}
	}
	cout<<ans<<endl;
	return 0;
}