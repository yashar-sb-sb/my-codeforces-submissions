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
	int n,m;
	cin>>n>>m;
	if(n>m+1 || m>2*n+2){cout<<"-1";return 0;}
	if(m>2*n)
	{
		cout<<"11";
		m-=2;
	}
	while(n--)
	{
		cout<<0;
		if(m>0)
		{
			cout<<1;
			--m;
			if(m>=n)
			{
				cout<<1;
				--m;
			}
		}
	}
	return 0;
}