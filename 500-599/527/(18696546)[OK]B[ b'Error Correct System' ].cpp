#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<char,int> S['z'+1];

int main()
{
ios_base::sync_with_stdio(0);
	int n,d=0;
	string s,t;
	cin>>n>>s>>t;
	for(int i = 0; i < n; ++i)
	{
		if(s[i]!=t[i])
		{
			S[s[i]][t[i]] = i+1;
			++d;
		}
	}
	int td = d,a=-1,b=-1;
	for(char i = 'a'; i <= 'z'; ++i)
	{
		for(auto j:S[i])
		{
			if(S[j.first].find(i)!=S[j.first].end())
			{
				cout<<d-2<<'\n'<<j.second<<' '<<S[j.first][i]<<endl;
				return 0;
			}
			if(S[j.first].size())
			{
				td=d-1;
				a = j.second;
				b = S[j.first].begin()->second;
			}
		}
	}
	cout<<td<<'\n'<<a<<' '<<b<<endl;
	return 0;
}
