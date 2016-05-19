#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200001];
int R[500], C[500];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,inp;
	cin>>n>>m;
	A[0]=A[1] = 1;
	for(int i = 2; i < 100001; ++i)
	{
		if(!A[i])for(int j = i+i; j < 200001; j+= i)
		{
			A[j] = 1;
		}
	}
	int t;
	for(int i = 200000; i; --i)
	{
		if(!A[i])t = i;
		A[i] = t-i;
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>inp;
			R[i] += A[inp];
			C[j] += A[inp];
		}
	}
	t = R[0];
	for(int i = 1; i < n; ++i)t = min(R[i],t);
	for(int i = 0; i < m; ++i)t = min(C[i],t);
	cout<<t<<endl;
	return 0;
}
