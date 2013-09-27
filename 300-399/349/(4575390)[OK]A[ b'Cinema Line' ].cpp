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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,_25=0,_50=0,_100=0,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp==25)++_25;
		else if(inp==50)
		{
			if(_25)
			{
				--_25;
				++_50;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
		else
		{
			if(_50&&_25)
			{
				--_50;
				--_25;
			}
			else if(_25>2)
			{
				_25-=3;
			}
			else
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}