#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>
#include<set>
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int mod = (int)1e9+7;

int A[5001];
int D[5001];
int Dp[5001][5001];
int Dpo[5001][5001];

int check(int l, int e)
{
	int i=0;
	while(A[e-l+1+i] == A[e+1+i])
	{
		if(D[e-l+1+i] == -1 && D[e+1+i] == -1)break;
		else if(D[e-l+1+i] == -1)i += D[e+1+i];
		else if(D[e+1+i] == -1)i += D[e-l+1+i];
		else i += min(D[e-l+1+i], D[e+1+i]);
		//cout<<i<<endl;
	}
	if(A[e-l+1+i] < A[e+1+i])
	{
		return 0;
	}
	return 1;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n, d = -1;
	cin>>n;
	for(int i = 1; i <= n; ++i){char cha;cin>>cha;A[i] = cha - '0';}
	for(int i = n; i > 0; --i)
	{
		D[i] = d;
		if(A[i] != A[i-1])d = 0;
		if(d!=-1)++d;
	}
	for(int i = 0; i<=n; ++i)
	{
		Dp[i][n] = Dpo[i][n] = 1;
	}
	for(int i = n - 1; i > 0; --i)
	{
		for(int j = n-1; j >= i; --j)
		{
			if(A[i+1])
			{
				int t=0;
				if(t+j+i<=n)t = check(i,j);
				if(t+j+i<=n)Dp[i][j] = Dpo[i+t][j+i+t];
			}
			Dpo[i][j] = (Dp[i][j] + Dpo[i+1][j+1])%mod;
		}
	}
	cout<<Dpo[1][1];
	return 0;
}
