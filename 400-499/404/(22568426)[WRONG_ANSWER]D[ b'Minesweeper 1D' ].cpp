#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

#define B(x) (int(S[x-1]=='*')+int(S[x+1]=='*'))

char S[1000003];

int main()
{
ios_base::sync_with_stdio(0);
	cin>>S+2;
	int res = 0;
	for(int i = 2; S[i]; ++i)
	{
		if(S[i] == '0')
		{
			if(B(i) > 0)return cout<<0,0;
			if(S[i-1]=='?')S[i-1]='a';
			if(S[i+1]=='?')S[i+1]='a';
		}
		if(S[i] == '2')
		{
			if(S[i-1]=='?')S[i-1]='*';
			if(S[i+1]=='?')S[i+1]='*';
			if(S[i-1]=='.')S[i-1]='*', --res;
			if(B(i) < 2)return cout<<0,0;
		}
		if(S[i] == '1')
		{
			if(B(i) == 2)return cout<<0,0;
			if(B(i) == 1)
			{
				if(S[i-1]=='?')S[i-1]='a';
				if(S[i+1]=='?')S[i+1]='a';
			}
			else
			{
				if(S[i-1]=='?'&&S[i+1]=='?')S[i-1]='.',S[i+1]='.',++res;
				else if(S[i-1] == '?')S[i-1] = '*';
				else if(S[i+1] == '?')S[i+1] = '*';
				else return cout<<0,0;
			}
		}
	}
	int ans=1;
	for(int i = 2; S[i]; ++i)if(S[i]=='?')ans = ans*2%1000000007;
	while(res--)ans = ans*2%1000000007;
	cout<<ans<<endl;
	return 0;
}