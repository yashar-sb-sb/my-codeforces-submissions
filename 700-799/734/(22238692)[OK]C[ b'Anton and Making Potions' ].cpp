#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

pii A[200000], B[200000];

int main()
{
ios_base::sync_with_stdio(0);
	LL n,m,k,x,s;
	cin>>n>>m>>k>>x>>s;
	for(int i = 0; i < m; ++i)cin>>A[i].first;
	for(int i = 0; i < m; ++i)cin>>A[i].second;
	for(int i = 0; i < k; ++i)cin>>B[i].first;
	for(int i = 0; i < k; ++i)cin>>B[i].second;
	sort(A,A+m);
	sort(B,B+k);
	int cur = 0;
	LL mi = LL(2e9+1);
	for(int i = 0; i < m; ++i)
	{
		if(A[i].second<mi)A[cur++] = A[i], mi = A[i].second;
	}
	
	m = cur;
	mi = LL(2e9+1);
	cur = k-1;
	for(int i = k-1; i > -1; --i)
	{
		if(B[i].second<mi)B[cur--] = B[i], mi = B[i].second;
	}
	++cur;
	for(int i = 0; cur < k; ++i)B[i] = B[cur++];
	k = cur;
	mi = x*n;
	for(int i = 0; i < m; ++i)
	{
		if(A[i].second<=s)mi = min(A[i].first*n,mi);
		if(A[i].second+B[0].second<=s)
		{
			int l = 0, r = k-1;
			while(l<r)
			{
				int mid = (l+r)/2;
				if(A[i].second+B[mid].second<=s)l = mid+1;
				else r = mid-1;
			}
			l = max(l,r)+2;
			l = min(l,(int)k-1);
			while(A[i].second+B[l].second>s)--l;
			mi = min(mi,A[i].first*max(n-B[l].first,0LL));
		}
	}
	for(int i= 0; i < k; ++i)
	{
		if(B[i].second<=s)mi = min(mi,max(n-B[i].first,0LL)*x);
	}
	cout<<mi<<endl;
	return 0;
}