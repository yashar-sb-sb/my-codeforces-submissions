#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[503];

int main()
{
	int n,k,res = 0;
	cin>>n>>k;
	A[0] = A[n+1] = k;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = 1; i <= n; ++i)
	{
		res += k-min(k,A[i]+A[i-1]);
		A[i] += k-min(k,A[i]+A[i-1]);
	}
	cout<<res<<'\n';
	for(int i = 1; i <= n; ++i)cout<<A[i]<<' ';cout<<endl;
	return 0;
}