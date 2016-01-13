#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s, r;
	int c, m=-5000, a;
	cin>>a;
	while(cin>>s)
	{
		cin>>a;
		c = a*100;
		cin>>a;
		c -= a*50;
		for(int i = 0; i < 5; ++i){cin>>a; c+=a;}
		if(c>m){r = s; m = c;}
	}
	cout<<r;
	return 0;
}
