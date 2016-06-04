#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b,inp;
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		cin>>inp;
		if(inp == 1)a = i;
		else if(inp == n)b = i;
	}
	cout<<max(n-min(a,b),max(a,b)-1)<<endl;
	return 0;
}
