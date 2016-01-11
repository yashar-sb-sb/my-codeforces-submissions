#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s[2]={"",""};
	string a;
	int i;
	cin>>a;
	for(i = 0; i < a.size() && a[i]=='0'; ++i);
	for(; i < a.size(); ++i)s[0].push_back(a[i]);
	cin>>a;
	for(i = 0; i < a.size() && a[i]=='0'; ++i);
	for(; i < a.size(); ++i)s[1].push_back(a[i]);
	if(s[0].size() < s[1].size())cout<<'<';
	else if(s[0].size() > s[1].size())cout<<'>';
	else
	{
		for(int i = 0; i < s[0].size(); ++i)
		{
			if(s[0][i]<s[1][i])
			{
				cout<<'<';return 0;
			}
			if(s[0][i]>s[1][i])
			{
				cout<<'>';return 0;
			}
		}
		cout<<'=';
	}
	return 0;
}
