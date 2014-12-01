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
	LL n, x, y, a, l, r, m;
	cin>>n>>y>>x;
	while(n--)
	{
		cin>>a;
		l = 0;
		r = 1e18;
		m = (l+r)/2;
		//a = a * x * y;
		while(m/x + m/y != a && (m%x!=m%y || m/x + m/y != a + 1))
		{
			if(m/x + m/y < a) l = m+1;
			else r = m;
			m = (l+r)/2;
		}
		l = m/x*x;
		r = m/y*y;
		if(l > r)cout<<"Vanya\n";
		else if(r > l)cout<<"Vova\n";
		else cout<<"Both\n";
	}
	return 0;
}
