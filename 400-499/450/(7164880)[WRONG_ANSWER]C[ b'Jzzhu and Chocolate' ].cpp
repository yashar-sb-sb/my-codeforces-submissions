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
	LL n,m,k;
	cin>>n>>m>>k;
	if(n+m-2<k)
	{
		cout<<-1;
		return 0;
	}
	LL p = k;
	LL a = n/min(p+1,n);
	p -=min(p,n-1);
	LL b = m/min(p+1,m);
	p -=min(p,n-1);
	LL A = a * b;
	p = k;
	b = m/min(p+1,m);
	p -=min(p,n-1);
	a = n/min(p+1,n);
	p -=min(p,n-1);
	cout<<max(a*b,A);
	return 0;
}