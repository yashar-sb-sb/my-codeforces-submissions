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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	vector<string>r,wc,m,c;
	cin>>n;
	string s,t;
	while(n--)
	{
		cin>>s>>t;
		if(t == "rat")
			r.push_back(s);
		else if(t == "woman" || t == "child")
			wc.push_back(s);
		else if(t == "man")
			m.push_back(s);
		else
			c.push_back(s);
	}
	vector<string>::iterator i;
	for(i = r.begin(); i != r.end(); ++i)cout<<*i<<'\n';
	for(i = wc.begin(); i != wc.end(); ++i)cout<<*i<<'\n';
	for(i = m.begin(); i != m.end(); ++i)cout<<*i<<'\n';
	for(i = c.begin(); i != c.end(); ++i)cout<<*i<<'\n';
	return 0;
}