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

pii A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,d,l,r,m;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i].first>>A[i].second;
	sort(A,A+n);
	for(int i = 0; i < n; ++i)
	{
		d = A[i].first+A[i].second;
		l = 0;
		r = n-1;
		while(l<r)
		{
			m = (l+r)/2;
			if(A[m].first<d)l = m+1;
			else r = m;
		}
		if(A[l].first == d && A[l].first + A[l].second == A[i].first)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}