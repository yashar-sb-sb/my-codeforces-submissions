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
	int n,x,y,dx,dy;
	char c;
	cin>>n>>x>>y>>dx>>dy;
	if(x==dx&&y==dy)
	{
		cout<<0;
		return 0;
	}
	for(int i = 0; i < n; ++i)
	{
		cin>>c;
		if(c=='N'&&dy>y)++y;
		else if(c=='S'&&dy<y)--y;
		else if(c=='W'&&dx<x)--x;
		else if(c=='E'&&dx>x)++x;
		if(x==dx&&y==dy)
		{
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}