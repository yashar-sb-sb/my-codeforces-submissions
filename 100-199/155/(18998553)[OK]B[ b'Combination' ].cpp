#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,s=0,c=1;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].second>>A[i].first;
	}
	sort(A,A+n,greater<pii>());
	for(int i = 0; i < n && c; ++i)
	{
		--c;
		c += A[i].first;
		s += A[i].second;
	}
	cout<<s<<endl;
	return 0;
}
