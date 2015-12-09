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

int A[100001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp,t,m=0;
	cin>>n;
	t = n;
	while(n--)
	{
		cin>>inp;
		A[inp] = A[inp-1]+1;
		m = max(A[inp],m);
	}
	cout<<t-m;
	return 0;
}
