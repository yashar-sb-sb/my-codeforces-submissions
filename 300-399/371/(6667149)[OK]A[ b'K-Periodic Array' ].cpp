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

int dp[100]={};

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,inp,res=0;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp == 1)++dp[i%k];
	}
	n/=k;
	for(int i = 0; i < k; ++i)res+=min(n-dp[i],dp[i]);
	cout<<res;
	return 0;
}