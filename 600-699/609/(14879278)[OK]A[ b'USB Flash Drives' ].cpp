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
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n, m, i;
	cin>>n>>m;
	for(i = 0; i < n; ++i)cin>>A[i];
	sort(A, A+n);
	for(i = n - 1; m > 0; --i)
	{
		m -= A[i];
	}
	cout<< n - i - 1;
	return 0;
}
