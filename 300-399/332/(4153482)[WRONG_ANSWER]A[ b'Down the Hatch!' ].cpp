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
	int n,i=1,j=0,co=0;
	bool f = false;
	cin>>n;
	char c,t='e';
	while(cin>>c)
	{
		if(t==c)++i;
		else if(j%n)i = 0;
		if(j%n == 1 && !f && !i)
		{
			++i;
		}
		if(!(j%n))
		{
			if(i > 2)
			{
				++co;
				f = true;
			}
			else
			{
				f = false;
			}
		}
		else t = c;
		++j;
	}
	cout<<co;
	return 0;
}