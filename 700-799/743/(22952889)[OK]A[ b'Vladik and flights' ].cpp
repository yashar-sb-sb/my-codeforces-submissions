#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int a,b;
	string s;
	cin>>a>>a>>b>>s;
	--a;
	--b;
	if(s[a]==s[b])cout<<0;
	else cout<<1;
	return 0;
}