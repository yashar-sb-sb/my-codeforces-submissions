
#include <bits/stdc++.h>
#include <stdio.h>
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define X first
#define Y second
using namespace std;

int A[100];

int main()
{
	int n,k,t=0,m;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)cin>>A[i];
	sort(A,A+n);
	int j = 0;
	for(int i = 1; i <=k; ++i)
	{
		m=0;
		for( ;A[j] == i; ++j)++m;
		t+=n/k - min(n/k,m);
	}
	cout<<t;
    return 0;
}