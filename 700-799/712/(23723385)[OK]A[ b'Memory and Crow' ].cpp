#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[100000];

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	LL t = A[n-1];
	for(int i = n-2; i >= 0; --i)
	{
		A[i] += t;
		t = A[i] - t;
	}
	for(int i = 0; i < n; ++i)cout<<A[i]<<' ';
	cout<<endl;
	return 0;
}