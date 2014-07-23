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

int A[100001],B[100001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = 1; i <= n; ++i)
	{
		cin>>inp;
		B[A[i]]=inp;
	}
	for(int i = 1; i <= n; ++i)cout<<B[i]<<' ';
	return 0;
}