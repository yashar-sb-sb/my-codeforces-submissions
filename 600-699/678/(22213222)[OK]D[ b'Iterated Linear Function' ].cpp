#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

LL A,x,B,n,mod=1000000007;

void mul(LL a[2][2], LL b[2][2])
{
	LL res[2][2];
	memset(res,0,sizeof(res));
	for(int i = 0; i < 2; ++i)
		for(int j = 0; j < 2; ++j)
			for(int k = 0; k < 2; ++k)
				res[i][j] = (res[i][j]+a[i][k]*b[k][j]%mod)%mod;
				
	for(int i = 0; i < 2; ++i)
		for(int j = 0; j < 2; ++j)
			a[i][j] = res[i][j];
}

void exp(LL a[2][2], LL b)
{
	if(b==1)return;
	LL res[2][2];
	memset(res,0,sizeof(res));
	res[0][0] = res[1][1] = 1;
	LL tmp = 1;
	while(tmp<=b)
	{
		if(tmp&b)mul(res,a);
		tmp<<=1;
		mul(a,a);
	}
	
	for(int i = 0; i < 2; ++i)
		for(int j = 0; j < 2; ++j)
			a[i][j] = res[i][j];
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>A>>B>>n>>x;
	LL ans[2][2];
	ans[0][0] = A;
	ans[0][1] = B;
	ans[1][1] = 1;
	ans[1][0] = 0;
	exp(ans,n);
	LL res = (ans[0][0]*x%mod+ans[0][1])%mod;
	cout<<res<<endl;
	return 0;
}