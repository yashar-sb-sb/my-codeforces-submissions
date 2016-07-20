#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

string inp()
{
	char c;
	string r = "";
	while((cin>>c)&&isdigit(c))r.push_back(c);
	return r;
}

int main()
{
ios_base::sync_with_stdio(0);
	string a,d;
	int b;
	a = inp();
	d = inp();
	cin>>b;
	if(d=="0")d.pop_back();
	for(int i = 0; i < b; ++i)
	{
		if(i<d.size())a.push_back(d[i]);
		else a.push_back('0');
	}
	cout<<a;
	if(b<d.size())
	{
		cout<<'.';
		for(int i = b; i < d.size(); ++i)cout<<d[i];
	}
	cout<<endl;
	return 0;
}
