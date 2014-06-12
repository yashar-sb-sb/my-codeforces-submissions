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

int A[100],I[100];

bool f(int i, int j)
{
	return A[i]<A[j];
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,i;
	cin>>n>>i;
	for(i = 0; i < n; ++i)
	{
		cin>>A[i];
		I[i]=i;
	}
	sort(I,I+n,f);
	i=n;
	while(i--)A[I[i]] = i&1?0:1;
	cout<<*A;
	for(i = 1; i < n; ++i)
	{
		cout<<' '<<A[i];
	}
	return 0;
}