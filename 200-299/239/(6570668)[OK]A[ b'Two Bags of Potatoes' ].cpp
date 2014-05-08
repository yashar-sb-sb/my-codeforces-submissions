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
	int y,k,n,x;
	cin>>y>>k>>n;
	x = y/k*k+(y%k?k:0)-y;
	if(!x)x=k;
	if(y+x>n)cout<<-1;
	else
	{
		cout<<x;
		x+=k;
		while(x+y<=n)
		{
			cout<<' '<<x;
			x+=k;
		}
	}
	return 0;
}