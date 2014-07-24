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

int A[100002];

int main()
{
ios_base::sync_with_stdio(0);
	int n,j,k,l;
	cin>>n;
	A[0]=0;
	A[n+1]=1e9+1;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(j = 1; j <= n && A[j]>A[j-1]; ++j);
	for(k = j; k <= n && A[k]<A[k-1]; ++k);
	for(l = k; l <= n && A[l]>A[l-1]; ++l);
	if(l>n && A[k-1]>A[j-2] && A[j-1]<A[k])
	{
		cout<<"yes\n"<<j-1<<' '<<k-1;
	}
	else cout<<"no";
	return 0;
}