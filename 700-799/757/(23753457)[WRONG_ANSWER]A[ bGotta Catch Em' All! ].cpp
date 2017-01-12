#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[300];

int main()
{
	ios_base::sync_with_stdio(0);
	char c;
	while(cin>>c)++A[c];
	int ans = 1000000;
	ans = min(ans,A['B']);
	ans = min(ans,A['u']/2);
	ans = min(ans,A['l']);
	ans = min(ans,A['b']/2);
	ans = min(ans,A['a']/2);
	ans = min(ans,A['s']);
	ans = min(ans,A['r']);
	cout<<ans<<endl;
	return 0;
}