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

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,A[101],inp;
	cin>>n>>m;
	fill(A+1,A+1+n,0);
	++m;
	++n;
	for(int i = 1; i < m; ++i)
	{
		cin>>inp;
		for(int j = inp; j < n && !A[j]; ++j)A[j] = inp;
	}
	for(int i = 1; i < n; ++i)cout<<A[i]<<' ';
	return 0;
}