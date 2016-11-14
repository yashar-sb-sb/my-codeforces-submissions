#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;


int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int d = 0;
	int n = s.size();
	for(; d < n && s[d]!='.'; ++d);
	bool fl = true;
	int start;
	for(start = 0; start < n; ++start)
	{
		if(s[start] != '.' && s[start] != '0'){fl = false;break;}
	}
	if(fl)return cout<<0,0;
	if(d == n)s.push_back('.');
	n = s.size()-1;
	while(s[n]=='0'||s[n]=='.')--n;
	cout<<s[start];
	if(start!=n)cout<<'.';
	for(int i = start+1; i <= n; ++i)
	{
		if(i!=d)cout<<s[i];
	}
	if(d != start+1)cout<<'E'<<(d>start?d-start-1:d-start);
	cout<<endl;
	return 0;
}