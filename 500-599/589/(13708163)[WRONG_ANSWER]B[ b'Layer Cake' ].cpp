
#include <bits/stdc++.h>
#include <stdio.h>
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define X first
#define Y second
using namespace std;

plli A[4000];

plli m;
lli res = 0;

int main()
{
	lli n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first>>A[i].second;
		if(A[i].first<A[i].second)swap(A[i].first,A[i].second);
	}
	sort(A,A+n);
	for(int i = 0; i < n; ++i)
	{
		lli k = A[i].second;
		for(int j = i+1; j < n; ++j)
		{
			if(k > A[j].second)k = A[j].second;
		}
		if(A[i].first * k * (n-i)>res){res = A[i].first * k * (n-i); m.first = A[i].first; m.second = k;}
	}
	cout<<res<<'\n'<<m.first<<' '<<m.second<<'\n';
	return 0;
}