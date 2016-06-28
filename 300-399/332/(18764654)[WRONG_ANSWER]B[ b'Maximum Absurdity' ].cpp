#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[int(2+2e5)];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k;
	cin>>n>>k;
	map<LL,int> m;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	for(int i = n; i > 0; --i)
	{
		A[i]+=A[i+1];
	}
	int ma = 0,f,s;
	for(int i = k+1; i <= n + 1 -k; ++i)
	{
		if(!m[A[i-k] - A[i]])m[A[i-k] - A[i]] = i - k;
		if(A[i] - A[i+k] + m.rbegin()->first > ma)
		{
			ma = A[i] - A[i+k] + m.rbegin()->first;
			f = m.rbegin()->second;
			s = i;
		}
	}
	cout<<f<<' ' <<s<<endl;
	return 0;
}
