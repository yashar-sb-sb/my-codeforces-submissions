#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	vector<string> S;
	while(getline(cin,s))
	{
		S.push_back(s);
	}
	int size = 0;
	for(auto &i:S)
	{
		size = max((int)i.size(),size);
	}
	int z = 0;
	cout<<'*';
	for(int i = 0; i < size; ++i)cout<<'*';
	cout<<"*\n";
	for(auto &i:S)
	{
		cout<<'*';
		if((size-i.size())&1&&z&1)cout<<' ';
		for(int j = (size-i.size())/2; j; --j)cout<<' ';
		cout<<i;
		for(int j = (size-i.size())/2; j; --j)cout<<' ';
		if((size-i.size())&1)++z;
		if((size-i.size())&1&&z&1)cout<<' ';
		cout<<"*\n";
	}
	cout<<'*';
	for(int i = 0; i < size; ++i)cout<<'*';
	cout<<"*\n";
	return 0;
}
