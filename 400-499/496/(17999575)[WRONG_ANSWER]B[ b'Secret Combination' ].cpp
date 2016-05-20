#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000];
bool F[1000];
char c;

int main()
{
ios_base::sync_with_stdio(0);
	int n,t,mi;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>c;
		A[i] = c-'0';
		F[i] = true;
	}
	for(int i = 0; i < n; ++i)
	{
		mi = 10;
		for(int j = 0; j < n; ++j)
		{
			if(F[j])
			{
				mi = min(mi, (A[(i+j)%n] - A[j] + 10)%10);
			}
		}
		for(int j = 0; j < n; ++j)
		{
			if(F[j] && (A[(i+j)%n] - A[j] + 10)%10 > mi)F[j] = false;
		}
	}
	for(int i = 0; i < n; ++i)
	{
		if(F[i])
		{
			for(int j = 0; j < n; ++j)cout<<(A[(i+j)%n]-A[i]+10)%10;
		}
	}
	return 0;
}
