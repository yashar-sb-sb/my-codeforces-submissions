#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,L=0,R=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first>>A[i].second;
		L+=A[i].first;
		R+=A[i].second;
	}
	int ans = -1, m = abs(L-R);
	for(int i = 0; i < n; ++i)
	{
		int tmp = abs(L-A[i].first+A[i].second-(R-A[i].second+A[i].first));
		if(tmp>m)
		{
			ans = i;
			m = tmp;
		}
	}
	cout<<ans+1<<endl;
	return 0;
}