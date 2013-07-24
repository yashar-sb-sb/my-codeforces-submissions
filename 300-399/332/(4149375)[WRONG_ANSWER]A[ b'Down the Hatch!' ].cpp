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
//ios_base::sync_with_stdio(0);
	int n,i=1,j=2,co=0;
	cin>>n;
	char c,t='e';
	cin>>t>>c;
	t = c;
	do
	{
		if(t==c)++i;
		else i = 0;
		if(!(j%n)&& i > 2)++co;
		else t = c;
		++j;
	}while(cin>>c);
	cout<<co;
	return 0;
}