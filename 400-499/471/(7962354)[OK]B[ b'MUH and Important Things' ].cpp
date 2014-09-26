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

pii A[2000];
int B[2];

int main()
{
ios_base::sync_with_stdio(0);
	int n,c=0;
	cin>>n;
	for(int i = 0; i<n; ++i)
	{
		cin>>A[i].first;
		A[i].second = i+1;
	}
	sort(A,A+n);
	for(int i = 1; i<n && c < 2; ++i)
	{
		if(A[i].first==A[i-1].first)B[c++]=i;
	}
	if(c==2)
	{
		cout<<"YES\n";
		for(int i = 0; i<n; ++i)cout<<A[i].second<<' ';
		swap(A[B[0]],A[B[0]-1]);
		cout<<'\n';
		for(int i = 0; i<n; ++i)cout<<A[i].second<<' ';
		swap(A[B[1]],A[B[1]-1]);
		cout<<'\n';
		for(int i = 0; i<n; ++i)cout<<A[i].second<<' ';
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}