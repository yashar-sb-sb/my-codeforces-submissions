#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200001];
map<int,int> sc;

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		++sc[inp];
	}
	int m;
	cin>>m;
	for(int i = 1; i <= m; ++i)
	{
		cin>>A[i];
	}
	pii ma = pii(-1,-1);
	int ind = 0;
	for(int i = 1; i <= m; ++i)
	{
		cin>>inp;
		if(pii(sc[A[i]],sc[inp])>ma)
		{
			ind = i;
			ma = pii(sc[A[i]],sc[inp]);
		}
	}
	cout<<ind;
	return 0;
}
