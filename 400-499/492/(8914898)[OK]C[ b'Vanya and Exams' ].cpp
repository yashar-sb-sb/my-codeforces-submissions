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

pii A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,r,avg,p=0;
	cin>>n>>r>>avg;
	avg*=n;
	for(int i = 0; i < n; ++i){cin>>A[i].second>>A[i].first; avg-=A[i].second;}
	sort(A,A+n);
	for(int i = 0; avg>0; ++i)
	{
		p += A[i].first * min(avg,r-A[i].second);
		avg-=min(avg,r-A[i].second);
	}
	cout<<p;
	return 0;
}
