#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200000];

int main()
{
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = 0; i < n-1; ++i)
	{
		if(A[i]<0)return cout<<"NO",0;
		if(A[i]%2==1)--A[i+1];
	}
	if(A[n-1]<0 || A[n-1]%2==1)cout<<"NO";
	else cout<<"YES";
	return 0;
}