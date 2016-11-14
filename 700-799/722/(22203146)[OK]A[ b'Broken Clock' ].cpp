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
	int f;
	cin>>f>>s;
	if(s.substr(3)>"59")s[3] = '0';
	if(f == 24)
	{
		if(s.substr(0,2)>"23")s[0] = '0';
	}
	else
	{
		if(s.substr(0,2) == "00")s[1] = '1';
		if(s.substr(0,2) > "12")
		{
			if(s[1]=='0')s[0]='1';
			else s[0] = '0';
		}
	}
	cout<<s<<endl;
	return 0;
}