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
	int n,x,y,mix=1e9,mx=-1e9,miy=1e9,my=-1e9;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		mix = min(x,mix);
		mx = max(x,mx);
		miy = min(y,miy);
		my = max(y,my);
	}
	LL r = max(mx-mix,my-miy);
	cout<<r*r;
	return 0;
}