#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[101],m_m,B[101];

int solve(int v)
{
	int cur = A[v];
	for(int i = 1; i <= 100; ++i, cur=A[cur])
		if(cur == v)return i%2?i:i/2;
	return 0;
}

int main()
{
	LL n;
	cin>>n;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = 1; i <= n; ++i)
		B[solve(i)] = 1;
	LL cur = -1;
	for(int i = 1; i <= n; ++i)
	{
		if(B[i])
		{
			if(cur == -1)cur = i;
			else cur = cur*LL(i)/__gcd(cur,LL(i));
		}
	}
	if(B[0])cout<<-1<<endl;
	else cout<<cur<<endl;
	return 0;
}