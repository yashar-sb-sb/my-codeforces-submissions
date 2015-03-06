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

map<string,string> ma;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	string s,t;
	cin>>n>>m;
	while(m--)
	{
		cin>>s>>t;
		if(s.size()<=t.size())ma[s] = s;
		else ma[s] = t;
	}
	while(n--)
	{
		cin>>s;
		cout<<ma[s]<<" \n"[!n];
	}
	return 0;
}
