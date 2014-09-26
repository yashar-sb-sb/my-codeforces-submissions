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
	LL n,l=0,r=1000000000,m;
	m=(l+r)/2;
	cin>>n;
	while(!(2*m+(m-1)*m/2*3<=n&&2*(m+1)+m*(m+1)/2*3>n))
	{
		if(2*m+(m-1)*m/2*3<=n)l=m;
		else r = m+1;
		m=(l+r)/2;
	}
	for(int i = 1; i < 3 && (n - 2*i)%3!=0; ++i)
	{
		--m;
	}
	if(m>0)cout<<(m+2)/3;
	else cout<<0;
	return 0;
}