#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int M[100001],R[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,inp;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)
	{
		cin>>inp;
		if(M[inp])M[inp] = -1;
		else M[inp] = i;
	}
	bool fa= false,fi= false;
	for(int i = 0; i < m; ++i)
	{
		cin>>inp;
		if(M[inp]<0)fa = true;
		else if(M[inp])R[i] = M[inp];
		else fi = true;
	}
	if(fi)return cout<<"Impossible",0;
	if(fa)return cout<<"Ambiguity",0;
	cout<<"Possible\n";
	for(int i = 0; i < m; ++i)cout<<R[i]<<' ';
	return 0;
}
