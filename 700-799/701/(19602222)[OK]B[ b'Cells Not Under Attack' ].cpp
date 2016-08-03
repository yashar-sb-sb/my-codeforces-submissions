#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool A[int(1e5+1)], B[int(1e5+1)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,x,y,r=0,c=0;
	cin>>n>>m;
	LL res = (LL)n * n;
	while(m--)
	{
		cin>>x>>y;
		if(!A[x])
		{
			++r;
			res -= n-c;
		}
		if(!B[y])
		{
			++c;
			res -= n-r;
		}
		A[x] = B[y] = true;
		cout<<res<<' ';
	}
	return 0;
}
