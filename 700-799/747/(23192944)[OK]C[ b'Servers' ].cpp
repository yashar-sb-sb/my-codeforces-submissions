#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int K[100001], ans[100001];
vector<int> S[100001];
pii A[200000];
set<int> se;

int main()
{
	ios_base::sync_with_stdio(0);
	int n,q,t,k,d;
	cin>>n>>q;
	for(int i = 1; i <= n; ++i)se.insert(i);
	for(int i = 0; i < q; ++i)
	{
		cin>>t>>k>>d;
		A[2*i] = pii(t,i+1);
		A[2*i+1] = pii(t+d,-i-1);
		K[i+1] = k;
	}
	sort(A,A+2*q);
	for(int i = 0; i < 2*q; ++i)
	{
		if(A[i].second > 0)
		{
			if(se.size()>=K[A[i].second])
			{
				for(int j = 0; j < K[A[i].second]; ++j)
				{
					S[A[i].second].push_back(*se.begin());
					ans[A[i].second]+=*se.begin();
					se.erase(se.begin());
				}
			}
			else ans[A[i].second] = -1;
		}
		else
		{
			for(auto j:S[-A[i].second])se.insert(j);
		}
	}
	for(int i = 1; i <= q; ++i)cout<<ans[i]<<'\n';
	return 0;
}