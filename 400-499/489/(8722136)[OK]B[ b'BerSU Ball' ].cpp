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

int A[100],B[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,s=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	cin>>m;
	for(int i = 0; i < m; ++i)cin>>B[i];
	sort(A,A+n);
	sort(B,B+m);
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(abs(A[i]-B[j])<=1)
		{
			++s;
			++i;
			++j;
		}
		else if(A[i]<B[j])++i;
		else ++j;
	}
	cout<<s;
	return 0;
}