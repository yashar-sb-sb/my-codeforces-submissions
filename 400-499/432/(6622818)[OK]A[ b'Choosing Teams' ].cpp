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
	int n,k,i;
	cin>>n>>k;
	i = n;
	while(i--)cin>>A[i];
	sort(A,A+n);
	k = 6 - k;
	while(++i < n && A[i]<k);
	cout<<i/3;
	return 0;
}