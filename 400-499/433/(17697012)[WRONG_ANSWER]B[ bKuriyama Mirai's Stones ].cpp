#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001], B[100001];

int main()
{
	ios_base::sync_with_stdio(0);
	int n,m,t,l,r;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>B[i];
		A[i] = B[i] + A[i-1];
	}
	sort(B+1,B+n+1);
	for(int i = 1; i <= n; ++i)B[i] += B[i-1];
	cin>>m;
	while(m--)
	{
		cin>>t>>l>>r;
		if(t==1)cout<<A[r]-A[l-1]<<'\n';
		else cout<<B[r]-B[l-1]<<'\n';
	}
	return 0;
}
