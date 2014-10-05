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

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,d,m,l,r;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	--n;
	for(int i = 1; i < n; ++i)
	{
		for(int j = 0; j < i; ++j)
		{
			d = A[i]+A[j];
			l = i;
			r = n;
			while(l<r)
			{
				m = (l+r)/2;
				if(d>A[m])l = m+1;
				else r = m;
			}
			if(A[l] == d)
			{
				cout<<l+1<<' '<<i+1<<' '<<j+1;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}