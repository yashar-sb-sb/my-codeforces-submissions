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

int A[300000], s[300000];

bool f(int i, int j){return A[i]<A[j];}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i];
		s[i] = i;
	}
	sort(s,s+n,f);
	for(int i = 0; i < n - 1; ++i)
	{
		if(A[s[i+1]] <= A[s[i]])A[s[i+1]] += 1+A[s[i]]-A[s[i+1]];
	}
	for(int i = 0; i < n - 1; ++i)
	{
		cout<<A[i]<<' ';
	}
	cout<<A[n-1];
	return 0;
}