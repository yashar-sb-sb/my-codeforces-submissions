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
	int n,a,b,f,m,j=1;
	cin>>n>>a>>b;
	f = a;
	m = abs(a-b);
	for(int i = 2; i < n; ++i)
	{
		a = b;
		cin>>b;
		if(abs(a-b)<m)j = i, m = abs(a-b);
	}
	if(abs(f-b)<m)cout<<"1 "<<n;
	else cout<<j<<' '<<j+1;
	return 0;
}
