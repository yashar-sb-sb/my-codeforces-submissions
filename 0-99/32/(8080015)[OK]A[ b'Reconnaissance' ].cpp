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

int A[1000];
pii pa[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,d,j,l,r,di,res=0,m;
	cin>>n>>d;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	pa[0].first = A[0];
	pa[0].second = 1;
	j = 0;
	for(int i = 1; i < n; ++i)
	{
		if(A[i] == pa[j].first)++pa[j].second;
		else
		{
			pa[++j].first = A[i];
			pa[j].second = 1;
		}
	}
	++j;
	A[0]=pa[0].second;
	res += pa[0].second*(pa[0].second-1)/2;
	for(int i = 1; i < j; ++i)
	{
		A[i] = A[i-1] + pa[i].second;
		res += pa[i].second*(pa[i].second-1)/2;
	}
	--j;
	for(int i = 0; i < j; ++i)
	{
		l = i+1;
		r = j;
		di = pa[i].first+d;
		while(l<r)
		{
			m = (l+r)/2;
			if(di>pa[m].first)l = m+1;
			else r = m;
		}
		if(pa[l].first>di)--l;
		res += pa[i].second * (A[l]-A[i]);
	}
	cout<<2*res;
	return 0;
}