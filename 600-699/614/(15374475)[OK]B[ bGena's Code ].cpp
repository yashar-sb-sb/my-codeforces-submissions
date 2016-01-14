#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string S[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n, c = 0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>S[i];
		if(S[i] == "0"){cout<<0; return 0;}
		c = 0;
		for(string::iterator ii = S[i].begin(); ii != S[i].end(); ++ii)
		{
			if(*ii >= '1')
			{
				++c;
			}
			if(*ii > '1')
			{
				++c;
			}
		}
		if(c>1)swap(S[i], S[0]);
	}
	cout<<S[0];
	for(int i = 1; i < n; ++i)for(int j = 1; j < S[i].size(); ++j)cout<<'0';
	return 0;
}
