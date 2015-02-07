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

int n,m,A[6];

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>m;
	int ma = 1<<(n-1), cn=0,l =0, r=n-1;
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
