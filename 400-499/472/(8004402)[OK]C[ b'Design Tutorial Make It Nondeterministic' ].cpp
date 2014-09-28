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

string f[100001],s[100001];
int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	string t;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>f[i]>>s[i];
	}
	for(int i = 0; i < n; ++i)cin>>A[i];
	if(f[A[0]]<s[A[0]])t = f[A[0]];
	else t = s[A[0]];
	for(int i = 1; i < n; ++i)
	{
		if(f[A[i]]<t&&s[A[i]]<t)
		{
			cout<<"NO";
			return 0;
		}
		if(f[A[i]]>t&&s[A[i]]>t)
		{
			t = f[A[i]];
			if(t>s[A[i]])t = s[A[i]];
		}
		else if(f[A[i]]>t)t = f[A[i]];
		else t = s[A[i]];
	}
	cout<<"YES";
	return 0;
}