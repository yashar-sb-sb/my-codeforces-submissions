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

int A[(int)1e5];

int main()
{
ios_base::sync_with_stdio(0);
	int n,res=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	LL s = 0;
	for(int i = 0; i < n; ++i)
	{
		if(A[i]>=s)++res;
		s+=A[i];
	}
	cout<<res;
	return 0;
}
