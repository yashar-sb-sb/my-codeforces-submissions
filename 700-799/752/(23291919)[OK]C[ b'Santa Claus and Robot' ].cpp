#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	bool l,r,u,d;
	l = r = u = d = false;
	int res = 1;
	char c;
	while(cin>>c)
	{
		if(c=='R')r = true;
		else if(c=='L')l = true;
		else if(c=='U')u = true;
		else if(c=='D')d = true;
		if((r&&l)||(u&&d))
		{
			++res;
			l = r = u = d = false;
			if(c=='R')r = true;
			else if(c=='L')l = true;
			else if(c=='U')u = true;
			else if(c=='D')d = true;
		}
	}
	cout<<res<<endl;
	return 0;
}