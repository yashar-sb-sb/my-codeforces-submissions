#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[int(2+2e5)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	LL m = 0;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = n; i > 0; --i)
	{
		A[i]+=A[i+1];
	}
	LL ma = 0,f,s;
	for(int i = k+1; i <= n + 1 -k; ++i)
	{
		if(A[i-k] - A[i] > m)f = i-k, m = A[i-k] - A[i];
		if(A[i] - A[i+k] + m > ma)
		{
			ma = A[i] - A[i+k] + m;
			s = i;
		}
	}
	cout<<f<<' ' <<s<<endl;
	return 0;
}
