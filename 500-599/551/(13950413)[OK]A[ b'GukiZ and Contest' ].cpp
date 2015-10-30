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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[2000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,t=1;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first;
		A[i].second = i;
	}
	sort(A,A+n);
	for(int i = n-2; i >-1; --i)
	{
		if(A[i].first == A[i+1].first)A[i+1].first=t;
		else {A[i+1].first = t; t = n-i;}
	}
	A[0].first = t;
	for(int i = 0; i < n; ++i)
	{
		while(A[i].second != i)swap(A[i],A[A[i].second]);
		cout<<A[i].first<<' ';
	}
	return 0;
}
