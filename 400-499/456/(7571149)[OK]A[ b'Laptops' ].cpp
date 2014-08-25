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

pii A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int i = n;
	while(i--)
	{
		cin>>A[i].first>>A[i].second;
	}
	sort(A,A+n);
	int m = A[0].second;
	for(i = 1; i < n; ++i)
	{
		if(m>A[i].second)
		{
			cout<<"Happy Alex";
			return 0;
		}
		m = A[i].second;
	}
	cout<<"Poor Alex";
	return 0;
}