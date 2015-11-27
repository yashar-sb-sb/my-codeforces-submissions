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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,b,l,r,mid;
	cin>>n>>m;
	for(int i = 0; i<n; ++i)cin>>A[i];
	sort(A,A+n);
	for(int i = 0; i<m; ++i)
	{
		cin>>b;
		l = 0, r = n;
		while(l < r)
		{
			mid = (l + r)/2;
			if(A[mid]<=b)l = mid+1;
			else r = mid;
		}
		cout<<l<<' ';
	}
	return 0;
}