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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b,c,m=1000,r;
	cin>>n>>a>>b;r=b-a;--n;
	while(--n)
	{
		cin>>c;
		r = max(r,c-b);
		m = min(m,c-a);
		a = b;b = c;
	}
	cout<<max(m,r);
	return 0;
}
