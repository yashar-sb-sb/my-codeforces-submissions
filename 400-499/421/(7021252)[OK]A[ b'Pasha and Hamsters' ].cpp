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

bitset<100> bs;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,i;
	cin>>n>>a>>i;
	while(a--)
	{
		cin>>i;
		bs.set(i-1);
	}
	for(i = 0; i < n; ++i)
	{
		cout<<(bs[i]?1:2)<<' ';
	}
	return 0;
}