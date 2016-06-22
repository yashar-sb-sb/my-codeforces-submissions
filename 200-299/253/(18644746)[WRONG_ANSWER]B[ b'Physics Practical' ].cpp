#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(5e3+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		++A[inp];
	}
	int m=0,s = 0;
	for(int i = 1; i < n; ++i)
	{
		s+=A[2*i]+A[2*i-1];
		s-=A[i-1];
		m = max(m,s);
	}
	cout<<n-m<<endl;
	return 0;
}
