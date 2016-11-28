#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

#define B(x) (int(S[x-1]=='*')+int(S[x+1]=='*'))

char S[1000002];
const int mod = 1000000007;

int f()
{
	int res = 0;
	for(int i = 1; S[i]; ++i)
	{
		if(S[i] == '0')
		{
			if(B(i) > 0)return 0;
			if(S[i-1]=='?')S[i-1]='a';
			if(S[i-1]=='.')S[i-1]='a',--res;
			if(S[i+1]=='?')S[i+1]='a';
		}
		if(S[i] == '2')
		{
			if(S[i-1]=='?')S[i-1]='*';
			if(S[i+1]=='?')S[i+1]='*';
			if(S[i-1]=='.')S[i-1]='*', --res;
			if(B(i) < 2)return 0;
		}
		if(S[i] == '1')
		{
			if(B(i) == 2)return 0;
			if(B(i) == 1)
			{
				if(S[i-1]=='?')S[i-1]='a';
				if(S[i+1]=='?')S[i+1]='a';
				if(S[i-1]=='.')S[i-1]='a', --res;
			}
			else
			{
				if(S[i-1]=='?'&&S[i+1]=='?')S[i-1]='.',S[i+1]='.',++res;
				else if(S[i-1]=='.'&&S[i+1]=='?')S[i+1]='.';
				else if(S[i-1] == '?')S[i-1] = '*';
				else if(S[i+1] == '?')S[i+1] = '*';
				else if(S[i-1] == '.')S[i-1] = '*', --res;
				else return 0;
			}
		}
	}
	int ans=1;
	for(int i = 1; S[i]; ++i)if(S[i]=='?')ans = ans*2%mod;
	while(res--)ans = ans*2%mod;
	return ans;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>S+1;
	cout<<f();
	return 0;
}