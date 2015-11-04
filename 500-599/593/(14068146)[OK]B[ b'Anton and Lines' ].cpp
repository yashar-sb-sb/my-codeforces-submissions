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

pair<LL,LL> A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,x1,x2,k,b;
	cin>>n>>x1>>x2;
	for(int i = 0; i < n; ++i)
	{
		cin>>k>>b;
		A[i].first = x1*k+b;
		A[i].second = x2*k+b;
	}
	sort(A,A+n);
	for(int i = 1; i < n; ++i)if(A[i].second<A[i-1].second){cout<<"YES";return 0;}
	cout<<"NO";
	return 0;
}
