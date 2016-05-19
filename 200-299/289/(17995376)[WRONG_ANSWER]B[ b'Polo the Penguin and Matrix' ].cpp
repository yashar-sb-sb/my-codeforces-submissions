#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,d,ma=1;
	cin>>n>>m>>d;
	int inp;
	for(int i = n*m; i; --i)
	{
		cin>>inp;
		if(inp%d)return cout<<-1,0;
		ma = max(ma,inp);
	}
	cout<<ma/d;
	return 0;
}
