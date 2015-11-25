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

int A[102];

int main()
{
ios_base::sync_with_stdio(0);
	int n,res = 0;
	cin>>n;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = 1; i <= n; ++i)res+=(int)(A[i]==1||(A[i-1] == 1 && A[i+1] == 1));
	cout<<res;
	return 0;
}
