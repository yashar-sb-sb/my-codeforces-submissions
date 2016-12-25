#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A['z'+1];

int main()
{
	ios_base::sync_with_stdio(0);
	string s,t;
	cin>>s>>t;
	int n = s.size();
	for(int i = 0; i < n; ++i)
	{
		if(A[s[i]]==0)A[s[i]] = t[i];
		if(A[t[i]]==0)A[t[i]] = s[i];
		if(A[s[i]]!=t[i])return cout<<-1,0;
		if(A[t[i]]!=s[i])return cout<<-1,0;
	}
	int k = 0;
	for(char i = 'a'; i <= 'z'; ++i)
	{
		if(i<A[i])++k;
	}
	cout<<k<<'\n';
	for(char i = 'a'; i <= 'z'; ++i)
	{
		if(i<A[i])cout<<i<<' '<<A[i]<<'\n';
	}
	return 0;
}