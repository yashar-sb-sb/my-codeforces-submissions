#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>> n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A, A+n);
	for(int i = 0; i < n; ++i)
	{
		cout<<(i&1 ? A[n-1-i/2] : A[i/2])<<' ';
	}
	return 0;
}
