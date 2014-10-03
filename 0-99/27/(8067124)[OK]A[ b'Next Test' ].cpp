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

int A[3002];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	A[n+1]=0;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	sort(A+1,A+n+1);
	for(int i = 1; true; ++i)if(A[i]!=i){cout<<i; return 0; }
	return 0;
}