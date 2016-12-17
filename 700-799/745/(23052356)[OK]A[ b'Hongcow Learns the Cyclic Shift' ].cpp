#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

set<string> se;

int main()
{
	string s;
	cin>>s;
	for(int i = 0; i < s.size(); ++i)
	{
		string t = "";
		for(int j = 0; j < s.size(); ++j)t.push_back(s[(i+j)%s.size()]);
		se.insert(t);
	}
	cout<<se.size()<<endl;
	return 0;
}