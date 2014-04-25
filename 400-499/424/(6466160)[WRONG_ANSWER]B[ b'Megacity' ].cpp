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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,int> pii;

pii A[1000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,s,k;
	LL x,y;
	cout.precision(10);
	cin>>n>>s;
	for(int i = 0; i < n; ++i)
	{
		cin>>x>>y>>k;
		A[i].first = x*x+y*y;
		A[i].second = k;
	}
	sort(A,A+n);
	int j = 0;
	while(j<n&&s!=1000000)
	{
		s+=A[j++].second;
	}
	--j;
	if(j==-1||j==n-1)cout<<-1;
	else cout<<sqrt(A[j].first);
	return 0;
}