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

int A[2000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,s=0;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	for(int i = n-1; i >= 0; i-=k)
	{
		s+=2*A[i]-2;
	}
	cout<<s;
	return 0;
}