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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<string> w, n;

int main()
{
ios_base::sync_with_stdio(0);
	char c;
	bool f=true;
	string s;
	while(cin>>c)
	{
		if(c==',' || c==';')
		{
			if(s.size() > 1 && s[0] == '0')f = false;
			if(f&&s.size())n.push_back(s);
			else w.push_back(s);
			f = true;
			s = "";
		}
		else if((c < '0' || c > '9'))f = false,s.push_back(c);
		else s.push_back(c);
	}
	if(s.size() > 1 && s[0] == '0')f = false;
	if(f&&s.size())n.push_back(s);
	else w.push_back(s);
	if(n.size()==0)cout<<'-';
	else
	{
		cout<<'"';
		vector<string>::iterator i = n.begin();
		cout<<*i;
		for(++i; i!=n.end(); ++i)cout<<','<<*i;
		cout<<'"';
	}
	cout<<'
';
	if(w.size()==0)cout<<'-';
	else
	{
		cout<<'"';
		vector<string>::iterator i = w.begin();
		cout<<*i;
		for(++i; i!=w.end(); ++i)cout<<','<<*i;
		cout<<'"';
	}
	cout<<'
';
	return 0;
}