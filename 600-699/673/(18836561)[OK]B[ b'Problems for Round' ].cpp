#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,mi = 1, ma,a,b;
	cin>>n>>m;
	ma = n;
	while(m--)
	{
		cin>>a>>b;
		mi = max(mi,min(a,b));
		ma = min(ma,max(a,b));
	}
	cout<<max(0,ma-mi)<<endl;
	return 0;
}
