#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

pii A[200000],B[200000];
pii S[200000];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,sz=0,a,b;
	cin>>n;
	for(LL i = 0; i < n; ++i)
	{
		cin>>a>>b;
		A[i].first = a-b;
		A[i].second = a;
		B[i].first = a+b;
		B[i].second = a;
	}
	sort(A,A+n);
	sort(B,B+n);
	LL m = -1, c = 0;
	for(LL i = 0; i < n; ++i)
	{
		while(A[i].first>=B[c].first)
		{
			m = max(m,B[c++].second);
		}
		if(m!=-1)S[sz++] = pii(A[i].second,m);
	}
	sort(S,S+sz);
	LL ans = 1;
	m = -1;
	for(LL i = 0; i < sz; ++i)
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