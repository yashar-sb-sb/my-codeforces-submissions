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
	int n,m,A[50],max;
	cin>>n>>m;
	for(int i=0; i < m; ++i)cin>>A[i];
	sort(A,A+m);
	max = --n;
	for(int i = n; i < m; ++i)
	{
		if(A[max]-A[max-n]>A[i]-A[i-n])max = i;
	}
	cout<<A[max]-A[max-n];
	return 0;
}