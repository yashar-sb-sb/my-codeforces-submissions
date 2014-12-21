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

int A[82];

int main()
{
ios_base::sync_with_stdio(0);
	int a, b, c, t=0, l, k;
	LL x;
	cin>>a>>b>>c;
	A[t++]=0;
	for(int i = 1; i < 82; ++i)
	{
		x = i;
		for(int j = 1; j < a; ++j)x*=i;
		x = b*x+c;
		l = x;
		k = 0;
		while(l)
		{
			k+=l%10;
			l/=10;
		}
		if(x<1000000000 && k==i)A[t++]=x;
	}
	cout<<t-1<<'\n';
	for(int i = 1; i < t; ++i)cout<<A[i]<<' ';
	return 0;
}
