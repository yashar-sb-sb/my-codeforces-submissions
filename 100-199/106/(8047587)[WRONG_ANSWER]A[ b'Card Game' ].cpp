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

int main()
{
ios_base::sync_with_stdio(0);
	char t;
	string f,s;
	cin>>t>>f>>s;
	if(f[0]=='T')f[0]='A';
	if(f[0]=='J')f[0]='B';
	if(f[0]=='Q')f[0]='C';
	if(f[0]=='K')f[0]='D';
	if(f[0]=='A')f[0]='E';
	
	if(s[0]=='T')s[0]='A';
	if(s[0]=='J')s[0]='B';
	if(s[0]=='Q')s[0]='C';
	if(s[0]=='K')s[0]='D';
	if(s[0]=='A')s[0]='E';
	if(f[1] == t)
	{
		if(s[1] != t || f[0]>s[0])cout<<"YES";
		else cout<<"NO";
	}//"T", "J", "Q", "K" and "A"
	else if(f[1] == s[1] && f[0] > s[0])cout<<"YES";
	else cout<<"NO";
	return 0;
}