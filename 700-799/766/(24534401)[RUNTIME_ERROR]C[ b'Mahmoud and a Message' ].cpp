#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[1000], B[26];
int mod = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);
    int n, ma = 1, mi = 1, mil;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i < 26; ++i)cin>>B[i];
    for(int i = 0; i < 1000; ++i)
    {
    	mil = 1000;
    	for(int j = i; j > -1; --j)
    	{
    		mil = min(mil,B[s[j]-'a']);
    		if(mil<i-j+1)break;
    		A[i] = (A[i] + (j<1?1:A[j-1]))%mod;
    		ma = max(ma, i-j+1);
    	}
    }
    mil = 1000;
    int sz = 1;
    for(int i = 0; i < n; ++i)
    {
    	mil = min(mil, B[s[i]-'a']);
    	if(mil < sz)
    	{
    		sz = 0;
    		mil = B[s[i]-'a'];
    		++mi;
    	}
    	++sz;
    }
    cout<<A[n-1]<<'\n'<<ma<<'\n'<<mi<<'\n';
	return 0;
}