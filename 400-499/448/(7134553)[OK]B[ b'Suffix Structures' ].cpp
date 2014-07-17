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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[101][101], A[26];

int main()
{
ios_base::sync_with_stdio(0);
	string s,t;
	bool f = false,tree=false;
	cin>>s>>t;
	int ls=s.size(),lt=t.size();
	for(int i = 0; i < ls; ++i)++A[s[i]-'a'];
	for(int i = 0; i < lt; ++i)--A[t[i]-'a'];
	for(int i = 0; i < 26; ++i)tree|=A[i]<0;
	for(int i = 0; i < 26; ++i)f|=A[i];
	for(int i = 0; i < ls; ++i)
	{
		for(int j = 0; j < lt; ++j)
		{
			if(s[i]==t[j])
			{
				dp[i+1][j+1] = dp[i][j]+1;
			}
			else
			{
				dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
			}
		}
	}
	bool ff = dp[ls][lt]!=lt;
	if(tree)cout<<"need tree";
	else
	{
		if(f&&ff)
		{
			cout<<"both";
		}
		else if(f)cout<<"automaton";
		else cout<<"array";
	}
	return 0;
}