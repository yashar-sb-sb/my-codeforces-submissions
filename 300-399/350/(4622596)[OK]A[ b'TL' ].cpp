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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int v=-1,n,m,N[100],M[100];
	cin>>n>>m;
	for(int i = 0; i < n; ++i)cin>>N[i];
	for(int i = 0; i < m; ++i)cin>>M[i];
	sort(N,N+n);
	sort(M,M+m);
	if(N[n-1]<M[0])
	{
		v = N[0]*2;
		if(N[n-1]>v)v = N[n-1];
		if(v>=M[0])v=-1;
	}
	cout<<v;
	return 0;
}