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
typedef pair<int,int> pii;

int A[50];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k,s=0;
	cin>>n>>m>>k;
	if(k>=m)
	{
		cout<<0;
		return 0;
	}
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n,greater<int>());
	for(int i = 0; i < n && k; ++i)
	{
		s+=A[i];
		--k;
		if(s+k>=m)
		{
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}