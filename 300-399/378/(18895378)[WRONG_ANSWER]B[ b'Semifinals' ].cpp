#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(1e5)], B[int(1e5)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a=0,b=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i]>>B[i];
	for(int i = 0; i < n; ++i)
	{
		if(A[a] < B[b])++a;
		else ++b;
	}
	a = max(A[n/2 + n&1] < B[n/2 + n&1]? n/2 + (n&1) : n/2 ,a);
	b = max(A[n/2 + n&1] > B[n/2 + n&1]? n/2 + (n&1) : n/2 ,b);
	int i;
	for(i = 0; i < a; ++i)cout<<'1';
	for(; i < n; ++i)cout<<'0';
	cout<<'\n';
	for(i = 0; i < b; ++i)cout<<'1';
	for(; i < n; ++i)cout<<'0';
	cout<<endl;
	return 0;
}
