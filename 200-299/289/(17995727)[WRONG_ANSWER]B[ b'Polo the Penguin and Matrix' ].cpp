#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10001],C[10001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,d,ma=1;
	cin>>n>>m>>d;
	int inp,s;
	cin>>s;
	A[s] = 1;
	s%=d;
	for(int i = n*m-1; i; --i)
	{
		cin>>inp;
		if(inp%d != s)return cout<<-1,0;
		++A[inp];
	}
	for(int i = 1; i < 10001; ++i)
	{
		C[i] = C[i-1]+s;
		s+=A[i];
	}
	s = 0;
	int r=0,res=1e9;
	for(int i = 10000; i; --i)
	{
		r+=s;
		res = min(res, r+C[i]);
		s+=A[i];
	}
	cout<<res/d;
	return 0;
}
