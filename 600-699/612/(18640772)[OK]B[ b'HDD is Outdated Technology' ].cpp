#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(2e5+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,ind;
	LL res = 0;
	cin>>n;
	for(int i =0; i < n; ++i)
	{
		cin>>ind;
		A[ind] = i;
	}
	for(int i = 1; i < n; ++i)res += abs(A[i] - A[i+1]);
	cout<<res<<endl;
	return 0;
}
