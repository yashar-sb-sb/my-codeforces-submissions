#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

vector<pii> A;

int main()
{
ios_base::sync_with_stdio(0);
	int n, m, a, b, l, r, x;
	cin>>n>>m;
	cin>>a;
	A.push_back(pii(0,0));
	A.push_back(pii(a,-1));
	while(--n)
	{
		cin>>a;
		if(a==A.back().first)b = A.back().second;
		else b = A.size()-1;
		A.push_back(pii(a,b));
	}
	while(m--)
	{
		cin>>l>>r>>x;
		int res = -1;
		if(A[r].second >= l)
		{
			if(A[A[r].second].first != x) res = A[r].second;
		}
		if(A[r].first != x) res = r;
		cout<<res<<'\n';
	}
	return 0;
}
