#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n,k;

bool f(int v)
{
	int kk = 1,nn =n;
	while(v/kk && nn > 0)
	{
		nn -= v/kk;
		kk *= k;
	}
	return nn <= 0;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>k;
	int l = 1, r = 1e9+1, m;
	while(l < r)
	{
		m = (l + r)/2;
		if(f(m))r = m;
		else l = m + 1;
	}
	cout<<r;
	return 0;
}
