#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(1e5)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,inp;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		A[i%k] += inp;
	}
	n = 0;
	for(int i = 1; i < k; ++i)
	{
		if(A[n]>A[i]) n = i;
	}
	cout<<n + 1<<endl;
	return 0;
}
