#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[int(2e5+2)];
int R[int(2e5+2)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,a;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
	}
	queue<int> q;
	q.push(1);
	while(!q.empty())
	{
		int now = q.front();
		q.pop();
		if(now>n || now<1)continue;
		if(!R[now-1]||R[now]+1<R[now-1])
		{
			R[now-1] = R[now]+1;
			q.push(now-1);
		}
		if(!R[now+1]||R[now]+1<R[now+1])
		{
			R[now+1] = R[now]+1;
			q.push(now+1);
		}
		if(!R[A[now]]||R[now]+1<R[A[now]])
		{
			R[A[now]] = R[now]+1;
			q.push(A[now]);
		}
	}
	R[1] = 0;
	for(int i = 1; i <= n; ++i)cout<<R[i]<<' ';
	return 0;
}
