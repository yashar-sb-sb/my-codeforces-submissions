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
	int n,u=0,t=0,i;
	cin>>n;
	while(n--)
	{
		cin>>i;
		if(i<0)
		{
			if(t>0)--t;
			else ++u;
		}
		else t+=i;
	}
	cout<<u;
	return 0;
}