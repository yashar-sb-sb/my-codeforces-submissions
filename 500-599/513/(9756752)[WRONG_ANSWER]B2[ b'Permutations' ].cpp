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

LL n,m,A[50];

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>m;
	LL ma = 1<<(n-2), cn=0,l =0, r=n-1;--m;
	for(int i = 0; i < n; ++i)
	{
		if(ma > m)
		{
			A[l++] = i + 1;
		}
		else
		{
			A[r--] = i + 1;
			m -= ma;
		}
		ma = ma>>1;
	}
	
	for(int i = 0; i < n; ++i)cout<<A[i]<<' ';
	return 0;
}
