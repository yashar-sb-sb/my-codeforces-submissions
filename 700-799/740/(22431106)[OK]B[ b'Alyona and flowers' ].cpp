#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int A[101];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,m;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
		A[i] += A[i-1];
	}
	LL ans = 0;
	int a,b;
	while(m--)
	{
		cin>>a>>b;
		ans += max(0,A[b]-A[a-1]);
	}
	cout<<ans<<endl;
	return 0;
}