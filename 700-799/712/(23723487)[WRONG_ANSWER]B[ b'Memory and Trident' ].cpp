#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int x = 0, y = 0;
	char c;
	while(cin>>c)
	{
		if(c=='U')++y;
		if(c=='D')--y;
		if(c=='R')++x;
		if(c=='L')--y;
	}
	x = abs(x);
	y = abs(y);
	if((x&1)+(y&1)==1)return cout<<"-1\n",0;
	cout<<(x+y)/2<<endl;
	return 0;
}