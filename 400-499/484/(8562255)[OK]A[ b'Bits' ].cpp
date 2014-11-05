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
	int n;
	cin>>n;
	uLL t,l,r,x;
	while(n--)
	{
		cin>>l>>r;
		x = 1;
		while(l<=r)
		{
			t = l;
			l|=x;
			x<<=1;
		}
		cout<<t<<'\n';
	}
	return 0;
}