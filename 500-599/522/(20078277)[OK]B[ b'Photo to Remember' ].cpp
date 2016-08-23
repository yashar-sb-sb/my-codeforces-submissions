#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int W[int(2e5)],H[int(2e5+1)],L[int(2e5)],R[int(2e5+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,sum = 0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>W[i]>>H[i];
		sum += W[i];
		L[i] = max(H[i],L[i-1]);
	}
	for(int i = n-1; i > -1; --i)R[i] = max(H[i],R[i+1]);
	for(int i = 0; i < n; ++i)cout<<(sum-W[i])*max(R[i+1],L[i-1])<<' ';
	return 0;
}
