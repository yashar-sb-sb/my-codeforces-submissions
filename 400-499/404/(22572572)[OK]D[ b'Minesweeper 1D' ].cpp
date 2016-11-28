#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

char S[1000002];
int D[2][5];
const int mod = 1000000007;

int f()
{
	int i = 2;
	if(S[1]=='0')D[0][0] = D[0][4] = 1;
	else if(S[1]=='1')D[0][3] = 1;
	else if(S[1]=='*')D[0][1] = D[0][3] = D[0][2] = 1;
	else if(S[1]=='?')D[0][0] = D[0][2] = D[0][1] = D[0][4] = 1, D[0][3] = 2;
	while(S[i])
	{
		if(S[i] == '0')
		{
			D[1][0] = D[1][4] = D[0][0];
		}
		else if(S[i] == '1')
		{
			D[1][0] = D[1][4] = D[0][1];
			D[1][3] = D[0][4];
		}
		else if(S[i] == '2')
		{
			D[1][3] = D[0][2];
		}
		else if(S[i] == '*')
		{
			D[1][1] = D[1][3] = D[1][2] = D[0][3];
		}
		else if(S[i] == '?')
		{
			D[1][0] = (D[0][1] + D[0][0])%mod;
			D[1][1] = D[0][3];
			D[1][2] = D[0][3];
			D[1][3] = ((D[0][4] + D[0][2])%mod + D[0][3])%mod;
			D[1][4] = (D[0][0] + D[0][1])%mod;
		}
		++i;
		for(int j = 0; j < 5; ++j)D[0][j] = D[1][j], D[1][j] = 0;
	}
	return (D[0][1] + D[0][0])%mod;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>S+1;
	cout<<f()<<endl;
	return 0;
}