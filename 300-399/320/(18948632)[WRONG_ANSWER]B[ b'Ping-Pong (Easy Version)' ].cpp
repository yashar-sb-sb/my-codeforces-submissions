#include<bits/stdc++.h>

using namespace std;


typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[101];
bool F[101];
int c = 1;

bool f(int a, int b)
{
	if(F[a])return false;
	if(A[a].first > A[b].first && A[a].first < A[b].second
		||
		A[a].second > A[b].first && A[a].first < A[b].second)return true;
	F[a] = true;
	bool r=false;
	for(int i = 1; i < c && !r; ++i)
	{
		
		if(A[a].first > A[i].first && A[a].first < A[i].second
			||
			A[a].second > A[i].first && A[a].first < A[i].second)
			r = f(i,b);
	}
	return r;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,t,a,b;
	cin>>n;
	while(n--)
	{
		cin>>t>>a>>b;
		if(t==1)
		{
			A[c++] = pii(a,b);
		}
		else
		{
			cout<<(f(a,b)?"YES":"NO")<<'\n';
			for(int i = 1; i < c; ++i)F[i] = false;
		}
	}
	return 0;
}
