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

pii A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n, k, m, s = 0;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first;
		A[i].second = i+1;
	}
	sort(A,A+n);
	for(m = 0; s <= k && m < n; ++m)
	{
		s+=A[m].first;
	}
	if(s>k)--m;
	cout<<m<<'\n';
	for(int i = 0; i < m; ++i)cout<<A[i].second<<' ';
	return 0;
}
