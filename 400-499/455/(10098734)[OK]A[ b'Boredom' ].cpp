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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
LL B[3];
LL A[100003];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a;
	cin>>n;
	while(n--){cin>>a;A[a]+=a;}
	for(int i = 0; i < 100003; ++i)
	{
		A[i] += max(A[i-2],A[i-3]);
	}
	cout<<A[100002];
	return 0;
}
