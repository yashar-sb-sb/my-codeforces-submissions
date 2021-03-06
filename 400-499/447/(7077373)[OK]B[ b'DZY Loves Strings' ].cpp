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

LL A[26];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	LL res=0,ma=0;
	string s;
	cin>>s>>k;
	n = s.size();
	for(int i = 0; i < 26; ++i)
	{
		cin>>A[i];
		ma  = max(ma, A[i]);
	}
	for(int i = 0; i < n; ++i)
	{
		res+=A[s[i]-'a']*(i+1);
	}
	for(int i = 1; i <= k; ++i)
	{
		res+=ma*(n+i);
	}
	cout<<res;
	return 0;
}