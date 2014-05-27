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
	int n,k,r,sall,sk;
	cin>>n>>k>>r>>r>>sall>>sk;
	sall-=sk;
	n-=k;
	while(k)
	{
		r = sk/k;
		sk-=r;
		--k;
		cout<<r<<' ';
	}
	while(n)
	{
		r = sall/n;
		sall-=r;
		--n;
		cout<<r<<' ';
	}
	return 0;
}