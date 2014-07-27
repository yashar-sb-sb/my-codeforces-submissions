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
	if(n)
	{
		cout<<1<<' '<<0<<'\n';
	}
	else
	{
		cout<<0<<' '<<1<<'\n';
	}
	cout<<n<<' '<<m<<'\n';
	cout<<0<<' '<<0<<'\n';
	if(n)
	{
		cout<<n-1<<' '<<m<<'\n';
	}
	else
	{
		cout<<n<<' '<<m-1<<'\n';
	}
	return 0;
}