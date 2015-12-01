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
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,s=0;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)cin>>A[i];
	int l = (n-k)*2;
	for(int i = 0; i < l/2; ++i)
	{
		s=max(s,A[i]+A[l-i-1]);
	}
	cout<<max(s,A[n-1]);
	return 0;
}
