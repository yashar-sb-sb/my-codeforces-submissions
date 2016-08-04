#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	char c;
	while(cin>>c)
	{
		if(c=='.')cout<<'0';
		else
		{
			cin>>c;
			if(c=='.')cout<<'1';
			else cout<<'2';
		}
	}
	cout<<'\n';
	return 0;
}
