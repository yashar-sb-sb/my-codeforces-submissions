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
	int n,A[100];
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	swap(A[0],A[n-1]);
	cout<<A[0];
	for(int i = 1; i < n; ++i)cout<<' '<<A[i];
	return 0;
}