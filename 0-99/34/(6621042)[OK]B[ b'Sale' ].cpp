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

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,i,s=0;
	cin>>n>>m;
	i=n;
	while(i--)cin>>A[i];
	sort(A,A+n);
	for(i=0; i < m && A[i]<0; ++i)s-=A[i];
	cout<<s;
	return 0;
}