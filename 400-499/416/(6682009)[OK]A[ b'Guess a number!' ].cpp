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
	int n,y,u,l;
	u = 2000000000;
	l = -2000000000;
	char c;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s>>y>>c;
		if(c=='N')
		{
			if(s=="<=")s=">";
			else if(s==">=")s="<";
			else if(s=="<")s=">=";
			else s="<=";
		}
		if(s.size()==1)
		{
			if(s=="<")--y;
			else ++y;
		}
		if(s[0]=='<')
		{
			if(u>y)u=y;
		}
		else
		{
			if(l<y)l=y;
		}
	}
	if(l>u)cout<<"Impossible";
	else cout<<l;
	return 0;
}