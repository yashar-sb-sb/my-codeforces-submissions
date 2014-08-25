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
	int n, i, mi=1e9+1, ma=0, mic, mac;
	cin>>n;
	while(n--)
	{
		cin>>i;
		if(mi==i)++mic;
		else if(mi>i)mi=i,mic=1;
		if(ma==i)++mac;
		else if(ma<i)ma=i,mac=1;
	}
	cout<<ma-mi<<' '<<(LL)mic*mac;
	return 0;
}