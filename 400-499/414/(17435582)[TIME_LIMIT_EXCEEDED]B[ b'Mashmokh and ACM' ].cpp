#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int D[2001][2001];
bool F[2001][2001];

int mod = 1e9+7;

int f(int n, int k)
{
	if(k==1)return 1;
	else if(F[n][k])return D[n][k];
	int res = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(!(n%i))res = (res+f(i,k-1))%mod;
	}
	D[n][k] = res;
	F[n][k] = true;
	return res;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	int res = 0;
	for(int i = 1; i <= n; ++i)res = (res + f(i,k))%mod;
	cout<<res;
	return 0;
}

