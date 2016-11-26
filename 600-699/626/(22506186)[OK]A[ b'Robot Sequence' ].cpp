#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int U[201],R[201],D[201],L[201];

int main()
{
ios_base::sync_with_stdio(0);
	int n,ans=0;
	char inp;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>inp;
		if(inp == 'U')++U[i];
		else if(inp == 'R')++R[i];
		else if(inp == 'D')++D[i];
		else ++L[i];
		U[i] += U[i-1];
		R[i] += R[i-1];
		D[i] += D[i-1];
		L[i] += L[i-1];
		for(int j = 0; j < i; ++j)
		{
			if(U[i]-D[i] == U[j]-D[j] &&
			R[i]-L[i] == R[j]-L[j])
				++ans;
		}
	}
	cout<<ans<<'\n';
	return 0;
}