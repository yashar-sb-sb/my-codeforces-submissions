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
	int n,l,r,m;
	cin>>n;
	l=0;
	r = 40;
	while(l<r)
	{
		m = (l+r)/2;
		if(m*(m+1)/2 < n)l = m+1;
		else r = m;
	}
	if(l*(l+1)/2==n)cout<<"YES";
	else cout<<"NO";
	return 0;
}