#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001];

int main()
{
	ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
	}
	int i = 1;
	while(k>i)
	{
		k-=i;
		++i;
	}
	cout<<A[k];
	return 0;
}
