#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	short i=0,e=0,o=0,inp;
	cin>>inp;
	while(true)
	{
		++i;
		cin>>inp;
		if(inp%2)
		{
			if(o)
			{
				if(!e)
				{
					while(inp%2)++i,cin>>inp;
					cout<<i;
				}
				else
				{
					cout<<e;
				}
				break;
			}
			o=i;
		}
		else
		{
			if(e)
			{
				if(!o)
				{
					while(!(inp%2))++i,cin>>inp;
					cout<<i;
				}
				else
				{
					cout<<o;
				}
				break;
			}
			e=i;
		}
	}
	return 0;
}