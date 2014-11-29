#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>
#include<bitset>
#include<string>
#include<cstdio>
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,m=0,l,r;
	vector<pii> ans;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first;
		A[i].second = i+1;
	}
	sort(A,A+n);
	for(l = 0; l + 1 < n && A[l].first == A[l+1].first; ++l);
	for(r = n-1; r > 0 && A[r].first == A[r-1].first; --r);
	for(int ll = 0, rr = n-1; m < k && A[l].first + 1 < A[r].first; ++m)
	{
		--A[rr].first;
		++A[ll].first;
		ans.push_back(make_pair(A[rr].second,A[ll].second));
		if(++ll>l)ll=0;
		if(--rr<r)rr=n-1;
		for(; l + 1 < n && A[l].first == A[l+1].first; ++l);
		for(; r > 0 && A[r].first == A[r-1].first; --r);
	}
	cout<<A[r].first-A[l].first<<' '<<m<<'\n';
	for(int i = 0; i < m; ++i)cout<<ans[i].first<<' '<<ans[i].second<<'\n';
	return 0;
}
