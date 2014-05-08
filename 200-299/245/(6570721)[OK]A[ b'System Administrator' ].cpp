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
	int n,xa=0,ya=0,xb=0,yb=0,t,x,y;
	cin>>n;
	while(n--)
	{
		cin>>t>>x>>y;
		if(t==1)
		{
			xa+=x;
			ya+=y;
		}
		else
		{
			xb+=x;
			yb+=y;
		}
	}
	cout<<(ya>xa?"DEAD":"LIVE")<<'\n'<<(yb>xb?"DEAD":"LIVE");
	return 0;
}