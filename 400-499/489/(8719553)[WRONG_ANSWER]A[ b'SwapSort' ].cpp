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

pii A[3000];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first;
		A[i].second = i;
	}
	sort(A,A+n);
	cout<<n<<'\n';
	for(int i = 0; i < n; ++i)
	{
		cout<<A[i].second<<' '<<i<<'\n';
		swap(A[i],A[A[i].second]);
	}
	return 0;
}