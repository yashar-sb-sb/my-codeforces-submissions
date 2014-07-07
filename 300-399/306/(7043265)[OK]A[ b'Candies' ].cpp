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
	while(n)
	{
		if(n%m)
		{
			cout<<n/m+1<<' ';
			--n;
		}
		else
		{
			cout<<n/m<<' ';
		}
		n-=n/m--;
	}
	return 0;
}