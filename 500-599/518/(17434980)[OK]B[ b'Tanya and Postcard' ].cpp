#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;



int main()
{
	ios_base::sync_with_stdio(0);
	char mask = 'a'-'A';
	string s,t;
	cin>>s>>t;
	map<char,int> m;
	for(auto i: t)++m[i];
	int a=0,b=0;
	vector<char> v;
	for(auto i: s)
	{
		if(m[i])
		{
			--m[i];
			++a;
		}
		else v.push_back(i^mask);
	}
	for(auto i: v)
	{
		if(m[i])
		{
			--m[i];
			++b;
		}
	}
	cout<<a<<' '<<b<<endl;
	return 0;
}
