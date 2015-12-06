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

pii A[(int)1e5];

int main()
{
ios_base::sync_with_stdio(0);
	int n,d;
	LL s=0,m=0;
	cin>>n>>d;
	for(int i = 0; i < n; ++i)cin>>A[i].first>>A[i].second;
	sort(A,A+n);
	int j = 0;
	for(int i = 0; i < n; ++i)
	{
		s += A[i].second;
		while(A[i].first - A[j].first >= d)s -= A[j++].second;
		m = max(m,s);
	}
	cout<<m;
	return 0;
}
