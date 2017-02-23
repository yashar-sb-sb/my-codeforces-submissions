#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

map<LL,LL> ma;

int main()
{
    ios_base::sync_with_stdio(0);
    LL n, k, ans = 0, sum = 0, inp;
    ma[0] = 1;
    cin>>n>>k;
    for(int i = 0; i < n; ++i)
    {
    	cin>>inp;
    	sum += inp;
    	if(abs(k)>1)for(LL j = 1; j <= 1e16; j*=k)
    		ans += ma[sum-j];
    	else
    		ans += ma[sum-1];
    	if(k == -1)ans += ma[sum+1];
    	++ma[sum];
    }
    cout<<ans<<endl;
   	return 0;
}