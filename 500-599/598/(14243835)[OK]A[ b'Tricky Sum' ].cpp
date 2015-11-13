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
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int T;
	cin>>T;
	while(T--)
	{
		LL n,res,t=1;
		cin>>n;
		res = n&1 ? (n+1)/2*n : n/2*(n+1);
		do
		{
			res -= 2*t;
		}while((t<<=1)<=n);
		cout<<res<<'\n';
	}
	return 0;
}
