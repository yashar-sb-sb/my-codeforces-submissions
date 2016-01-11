#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,c;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)A[i] = 1e9;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>c;
			A[j] = min(A[j], c);
		}
	}
	c = 0;
	for(int i = 0; i < m; ++i)c = max(c, A[i]);
	cout<<c;
	return 0;
}
