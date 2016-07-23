#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(1e3+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,cm=0,ci;
	cin>>n>>k;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = 1; i <= n; ++i)
	{
		int c = 0;
		if(A[i]-(i-1)*k>0)
		for(int j = i; j <= n; ++j)
		{
			if(A[i]+(j-i)*k == A[j])
			{
				++c;
			}
		}
		if(c>cm)
		{
			cm = c;
			ci = i;
		}
	}
	cout<<n-cm<<'\n';
	int d;
	for(int i = 1; i <= n; ++i)
	{
		d = A[ci]+(i-ci)*k - A[i];
		if(d == 0)continue;
		if(d < 0)cout<<"- ";
		if(d > 0)cout<<"+ ";
		cout<<i<<' '<<abs(d)<<'\n';
	}
	return 0;
}
