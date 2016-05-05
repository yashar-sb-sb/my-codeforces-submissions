#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n,k;
LL A[100000],B[100000];

bool compute(LL res)
{
	LL kk = k;
	for(int i = 0; i < n && kk >= 0; ++i)
	{
		kk -= max(0LL,A[i]*res-B[i]);
	}
	return kk >= 0;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>k;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = 0; i < n; ++i)cin>>B[i];
	LL l = 0, r = 2e9+1,m;
	while(l < r)
	{
		m = (l+r)/2;
		if(compute(m))l = m+1;
		else r = m;
	}
	while(!compute(l))--l;
	cout<<l;
	return 0;
}
