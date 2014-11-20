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

int A[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n, m, k, f, t, s=0, tt;
	cin>>n>>m>>k;
	for(int i = 0; i < m; ++i)cin>>A[i];
	cin>>f;
	while(m--)
	{
		tt=0;
		t=A[m]^f;
		for(int i = 0; i < n; ++i, t=t>>1)if(t&1)++tt;
		if(tt<=k)++s;
	}
	cout<<s;
	return 0;
}
