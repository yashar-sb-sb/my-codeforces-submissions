#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1009];

int main()
{
	ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		A[inp] = 1;
	}
	for(int i = 0; i < 1000; ++i)if(A[i] && A[i+1] && A[i+2])
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}
