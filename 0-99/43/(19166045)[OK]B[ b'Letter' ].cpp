#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[256];

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	getline(cin,s);
	for(auto i:s)++A[i];
	A[' '] = 1000;
	getline(cin,s);
	for(auto i:s)
	{
		if(!A[i])return cout<<"NO\n",0;
		--A[i];
	}
	cout<<"YES\n";
	return 0;
}
