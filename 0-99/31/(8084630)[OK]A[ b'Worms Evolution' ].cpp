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
	int n,d,m,l,r;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i].first, A[i].second = i;
	sort(A,A+n);
	--n;
	for(int i = 1; i < n; ++i)
	{
		for(int j = 0; j < i; ++j)
		{
			d = A[i].first+A[j].first;
			l = i;
			r = n;
			while(l<r)
			{
				m = (l+r)/2;
				if(d>A[m].first)l = m+1;
				else r = m;
			}
			if(A[l].first == d)
			{
				cout<<A[l].second+1<<' '<<A[i].second+1<<' '<<A[j].second+1;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}