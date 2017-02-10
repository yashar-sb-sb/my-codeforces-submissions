#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[8], tmp[8], A[3];

int main()
{
    ios_base::sync_with_stdio(0);
    int n,m;
    char c;
    memset(dp,15,sizeof(dp));
    dp[0] = 0;
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
    {
    	memset(A,1,sizeof(A));
    	for(int j = 0; j < m; ++j)
    	{
    		cin>>c;
    		if(c>='0' && c<='9')A[0] = min(A[0],min(j,m-j));
    		else if(c>='a' && c<='z')A[1] = min(A[1],min(j,m-j));
    		else A[2] = min(A[2],min(j,m-j));
    	}
    	for(int j = 7; j >= 0; --j)
    	{
    		dp[j|1] = min(dp[j|1],dp[j]+A[0]);
    		dp[j|2] = min(dp[j|2],dp[j]+A[1]);
    		dp[j|4] = min(dp[j|4],dp[j]+A[2]);
    	}
    }
    cout<<dp[7]<<endl;
	return 0;
}