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

int main()
{
ios_base::sync_with_stdio(0);
	string s,t="aeiou";
	int l;
	l=0;
	getline(cin,s);
	for(int i = 0; i < s.size(); ++i)if(t.find(s[i])!=-1)++l;
	if(l!=5){cout<<"NO"; return 0;}
	l=0;
	getline(cin,s);
	for(int i = 0; i < s.size(); ++i)if(t.find(s[i])!=-1)++l;
	if(l!=7){cout<<"NO"; return 0;}
	l=0;
	getline(cin,s);
	for(int i = 0; i < s.size(); ++i)if(t.find(s[i])!=-1)++l;
	cout<<(l==5?"YES":"NO");
	return 0;
}
