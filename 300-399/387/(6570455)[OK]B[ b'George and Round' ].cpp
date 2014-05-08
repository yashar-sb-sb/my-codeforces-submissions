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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[3000],B[3000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,i,j=0;
	cin>>n>>m;
	for(i = 0; i < n; ++i)cin>>A[i];
	for(i = 0; i < m; ++i)cin>>B[i];
	for(i = 0; i < n; ++i)
	{
		for(; j < m && B[j] < A[i]; ++j);
		if(j==m)break;
		++j;
	}
	cout<<n-i;
	return 0;
}