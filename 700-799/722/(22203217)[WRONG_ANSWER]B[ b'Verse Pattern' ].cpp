#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	int n;
	cin>>n;
	string p = "aeiouy";
	for(int i = 0; i < n; ++i)cin>>A[i];
	getline(cin,s);
	for(int i = 0; i < n; ++i)
	{
		getline(cin,s);
		int c = 0;
		for(auto j:s)
			if(p.find(j)!=-1)++c;
		if(c<A[i])return cout<<"NO",0;
	}
	cout<<"YES";
	return 0;
}