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
#include<cstdio>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,c=0,ind=-1,inp;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp/m+(inp%m>0)>=c)
		{
			ind=i;
			c=inp/m+(inp%m>0);
		}
	}
	cout<<ind+1;
	return 0;
}