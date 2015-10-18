
#include <bits/stdc++.h>
#include <stdio.h>
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define X first
#define Y second
using namespace std;
map<string,vector<string> > m;
int main()
{
	int n;
	string s,t;
	cin>>n;
	while(n--)
	{
		cin>>s;
		t = s;
		for(int i = 0; i < s.size(); ++i)if(t[i]>='A' && t[i] <='Z')t[i] += 'a' - 'A';
		if(t.substr(t.find('@')) == "@bmail.com")
		{
			string tt = "";
			string::iterator it;
			for(it = t.begin(); it != t.end(); ++it)
			{
				if(*it == '.')continue;
				if(*it == '+' || *it == '@')break;
				tt+=*it;
			}
			m[tt+"@bmail.com"].push_back(s);
		}
		else
		{
			m[t].push_back(s);
		}
	}
	map<string,vector<string> >::iterator mit = m.begin();
	cout<<m.size()<<'\n';
	for(;mit != m.end(); ++mit)
	{
		cout<<(*mit).second.size();
		for(vector<string>::iterator it = (*mit).second.begin(); it != (*mit).second.end(); ++it)
		{
			cout<<' '<<*it;
		}
		cout<<'\n';
	}
    return 0;
}