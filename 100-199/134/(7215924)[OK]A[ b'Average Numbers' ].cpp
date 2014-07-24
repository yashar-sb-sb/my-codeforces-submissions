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

int A[200000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,s=0,c=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i],s+=A[i];
	if(s%n)s=0;
	s/=n;
	for(int i = 0; i < n; ++i)if(A[i]==s)++c;
	cout<<c<<'\n';
	for(int i = 0; i < n; ++i)if(A[i]==s)cout<<i+1<<' ';
	return 0;
}