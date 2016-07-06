#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[101];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,b,c,r=0;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>a>>b>>c;
		A[a] += c;
		A[b] -= c;
	}
	for(int i = 1; i < 101; ++i)if(A[i] > 0)r += A[i];
	cout<<r;
	return 0;
}
