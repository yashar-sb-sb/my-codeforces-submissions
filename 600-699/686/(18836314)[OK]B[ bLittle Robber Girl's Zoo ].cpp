#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[102];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
	}
	A[n] = 1e9+1;
	A[n+1] = 1e9+2;
	for(int ii = n; ii--;)
	{
		for(int i = 0; i < n; ++i)
		{
			int j;
			for(j = i; A[j] > A[j+1]; j+=2)
				swap(A[j],A[j+1]);
			if(i<j)cout<<i+1<<' '<<j<<'\n';
		}
	}
	return 0;
}
