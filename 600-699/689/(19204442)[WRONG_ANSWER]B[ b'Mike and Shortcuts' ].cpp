#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> A[int(2e5+1)];
int R[int(2e5+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>a;
		A[a].push_back(i);
	}
	for(int i = 2; i <= n; ++i)
	{
		R[i] = R[i-1]+1;
		for(auto j:A[i])
		{
			R[i] = min(R[i],R[j]+1);
		}
	}
	for(int i = 1; i <= n; ++i)cout<<R[i]<<' ';
	return 0;
}
