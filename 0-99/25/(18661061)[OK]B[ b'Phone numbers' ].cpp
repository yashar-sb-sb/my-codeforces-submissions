#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	char c;
	string s = "";
	cin>>n;
	if(n&1)
	{
		cin>>c;
		cout<<c;
		cin>>c;
		cout<<c;
		cin>>c;
		cout<<c;
		s = "-";
	}
	while(cin>>c)
	{
		cout<<s<<c;
		cin>>c;
		cout<<c;
		s = "-";
	}
	return 0;
}
