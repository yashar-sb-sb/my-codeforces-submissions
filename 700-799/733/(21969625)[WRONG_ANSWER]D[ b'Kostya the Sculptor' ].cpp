#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<int> A[100000];

map<pii,pii> m;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,inp,ma = 0,res=0,res1=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		k = 4;
		while(--k)
		{
			cin>>inp;
			A[i].push_back(inp);
		}
		sort(A[i].begin(),A[i].end());
		if(A[i][0] > ma)
		{
			res = 0;
			res1 = i+1;
			ma = A[i][0];
		}
		if(m[pii(A[i][0],A[i][1])].first+A[i][2] > ma)
		{
			res = i+1;
			res1 = m[pii(A[i][0],A[i][1])].second;
			ma = min(m[pii(A[i][0],A[i][1])].first+A[i][2],min(A[i][0],A[i][1]));
		}
		if(m[pii(A[i][0],A[i][2])].first+A[i][1] > ma)
		{
			res = i+1;
			res1 = m[pii(A[i][0],A[i][2])].second;
			ma = min(m[pii(A[i][0],A[i][2])].first+A[i][1],min(A[i][0],A[i][2]));
		}
		if(m[pii(A[i][1],A[i][2])].first+A[i][0] > ma)
		{
			res = i+1;
			res1 = m[pii(A[i][1],A[i][2])].second;
			ma = min(m[pii(A[i][1],A[i][2])].first+A[i][0],min(A[i][1],A[i][2]));
		}
		m[pii(A[i][0],A[i][1])] = max(m[pii(A[i][0],A[i][1])],pii(A[i][2],i+1));
		m[pii(A[i][1],A[i][2])] = max(m[pii(A[i][1],A[i][2])],pii(A[i][0],i+1));
		m[pii(A[i][0],A[i][2])] = max(m[pii(A[i][0],A[i][2])],pii(A[i][1],i+1));
	}
	if(res * res1)cout<<2<<'\n'<<res<<' '<<res1<<endl;
	else cout<<1<<'\n'<<res+res1<<endl;
	return 0;
}