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
	int n,m;
	cin>>n>>m;
	if(!n&&m)cout<<"Impossible";
	else
	{
		if(m)
		{
			cout<<max(m,n)<<' '<<m+n-1;
		}
		else cout<<n<<' '<<n;
	}
	return 0;
}