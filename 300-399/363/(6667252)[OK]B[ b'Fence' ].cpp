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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int dp[150001];

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,i,ma;
	cin>>n>>k;
	dp[0]=0;
	for(i=1; i < k; ++i)
	{
		cin>>dp[i];
		dp[i]+=dp[i-1];
	}
	++n;
	ma=k;
	for(; i < n; ++i)
	{
		cin>>dp[i];
		dp[i]+=dp[i-1];
		if(dp[ma]-dp[ma-k]>dp[i]-dp[i-k])ma=i;
	}
	cout<<ma-k+1;
	return 0;
}