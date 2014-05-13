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
	int n, m, i;
	cin>>n>>m;
	bitset<1001> b;
	while(m--)
	{
		cin>>i;
		b.set(i);
		cin>>i;
		b.set(i);
	}
	m = 0;
	while(b[++m]);
	for(i = 1; i <= m; ++i)cout<<m<<' '<<i<<'\n';
	for(++i; i <= n; ++i)cout<<m<<' '<<i<<'\n';
	return 0;
}