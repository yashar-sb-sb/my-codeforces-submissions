#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[100][100];

int main()
{
    ios_base::sync_with_stdio(0);
    LL n,m,k,x,y;
    cin>>n>>m>>k>>x>>y;
    LL onf = m;
    LL onl = (n>1)*m;
    LL mid = 2*max(0LL,m*n-2*m);
    LL passes = k/(onf+onl+mid);
    k %= (onf+onl+mid);
    for(int i = 0; i < n; ++i)
    	for(int j = 0; j < m; ++j)
    		A[i][j] = passes;
    for(int i = 1; i < n-1; ++i)
    	for(int j = 0; j < m; ++j)
    		A[i][j] += passes;
    for(int i = 0; i < n && k; ++i)
    	for(int j = 0; j < m && k; ++j)
    	{
    		--k;
    		++A[i][j];
    	}
    for(int i = n-2; i >= 0 && k; --i)
    	for(int j = 0; j < m && k; ++j)
    	{
    		--k;
    		++A[i][j];
    	}
    LL mi = 1e18, ma = 0;
    for(int i = 0; i < n; ++i)
    {
    	for(int j = 0; j < m; ++j)
    	{
    		mi = min(A[i][j],mi);
    		ma = max(A[i][j],ma);
    	}
    }
    cout<<ma<<' '<<mi<<' '<<A[x-1][y-1]<<endl;
   	return 0;
}