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
	int n,l,t=1,k;
	cin>>n;
	l = n/2+1;
	for(int i = 1; t < l; ++i, t = (i*i+i)/2)
	{
		k = (sqrt(1+8*(n-t))-1)/2;
		if((k*k+k)/2+t==n)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}