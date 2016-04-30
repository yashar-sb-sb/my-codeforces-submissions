#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

priority_queue<pair<int, pii> > m;
int A[801];

int main()
{
	ios_base::sync_with_stdio(0);
	int n,inp;
	cin>>n;
	for(int i = 2; i <= 2*n; ++i)
	{
		for(int j = 1; j < i; ++j)
		{
			cin>>inp;
			m.push(pair<int, pii>(inp,pii(i,j)));
		}
	}
	int a,b;
	while(!m.empty())
	{
		a = m.top().second.first;
		b = m.top().second.second;
		m.pop();
		if(!(A[a]||A[b]))
			A[a] = b, A[b] = a;
	}
	for(int i = 1; i <= 2*n; ++i)cout<<A[i]<<' ';
	return 0;
}
 
