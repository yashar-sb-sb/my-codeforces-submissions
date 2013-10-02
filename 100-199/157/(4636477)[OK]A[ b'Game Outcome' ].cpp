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

int A[30][30],C[30],R[30];

int main()
{
ios_base::sync_with_stdio(0);
	int n,s;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)cin>>A[i][j];
	}
	for(int i = 0; i < n; ++i)
	{
		s = 0;
		for(int j = 0; j < n; ++j)s+=A[i][j];
		R[i] = s;
	}
	for(int i = 0; i < n; ++i)
	{
		s = 0;
		for(int j = 0; j < n; ++j)s+=A[j][i];
		C[i] = s;
	}
	sort(R,R+n);
	sort(C,C+n);
	int k = 0;
	s=0;
	for(int i = 0; i < n; ++i)
	{
		while(k<n&&C[i]>R[k])++k;
		s+=k;
	}
	cout<<s;
	return 0;
}