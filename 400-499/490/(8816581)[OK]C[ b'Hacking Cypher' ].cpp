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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b,d,t;
	string s;
	cin>>s>>a>>b;
	n = s.size();
	A[0] = (s[0]-'0')%a;
	for(int i = 1; i < n; ++i)
	{
		A[i] = (A[i-1]*10+(s[i]-'0'))%a;
	}
	d = 1;
	t = (s[n-1]-'0')%b;
	int l = s[n-1]-'0';
	for(int i = n-2; i >= 0; --i)
	{
		if(!t&&!A[i]&&l)
		{
			cout<<"YES\n";
			for(int j = 0; j <= i; ++j)cout<<s[j];
			cout<<'\n';
			for(int j = i+1; j < n; ++j)cout<<s[j];
			return 0;
		}
		d=10*d%b;
		l+=s[i]-'0';
		t = (t + d * (s[i]-'0'))%b;
	}
	cout<<"NO";
	return 0;
}
