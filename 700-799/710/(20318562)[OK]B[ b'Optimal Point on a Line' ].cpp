#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<pii,int> ma;

int A[int(3e5)];
LL L[int(3e5)],R[int(3e5)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,x;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A, A+n);
	for(int i = 1; i < n; ++i)
		L[i] = L[i-1] + (LL)i*(A[i]-A[i-1]);
	for(int i = n-2; i >= 0; --i)
		R[i] = R[i+1] + (LL)(n-1-i)*(A[i+1]-A[i]);
	LL m = R[0]+L[0];
	int res = A[0];
	for(int i = 1; i < n; ++i)
		if(R[i]+L[i] < m)
		{
			m = R[i]+L[i];
			res = A[i];
		}
	cout<<res<<endl;
}