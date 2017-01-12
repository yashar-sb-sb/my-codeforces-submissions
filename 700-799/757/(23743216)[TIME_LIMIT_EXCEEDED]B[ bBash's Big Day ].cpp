#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int S[100001],A[100000];
vector<int> primes;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i];
	for(int i = 2; i < 100001; ++i)
	{
		if(S[i])continue;
		primes.push_back(i);
		if(100000/i>=i)
		for(int j = i*i; j < 100001; j+=i)S[j] = 1;
	}
	int ans = 0;
	for(auto p:primes)
	{
		int cur = 0;
		for(int i = 0; i < n; ++i)cur+=A[i]%p==0;
		ans = max(cur,ans);
	}
	cout<<ans<<endl;
	return 0;
}