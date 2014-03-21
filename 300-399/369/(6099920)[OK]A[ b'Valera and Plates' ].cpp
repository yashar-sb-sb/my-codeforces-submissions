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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k,i,c=0;
	cin>>n>>m>>k;
	while(n--)
	{
		cin>>i;
		if(i==1)
		{
			if(m)
			{
				--m;
			}
			else
			{
				++c;
			}
		}
		else
		{
			if(k)
			{
				--k;
			}
			else if(m)
			{
				--m;
			}
			else
			{
				++c;
			}
		}
	}
	cout<<c;
	return 0;
}