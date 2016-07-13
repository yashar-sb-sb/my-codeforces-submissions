#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[int(1e5+1)];
int Y;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,v,y,x,t;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)cin>>A[i];
	while(m--)
	{
		cin>>t;
		if(t==1)
		{
			cin>>v>>x;
			A[v] = x-Y;
		}
		else if(t==2)
		{
			cin>>y;
			Y+=y;
		}
		else
		{
			cin>>v;
			cout<<A[v]+Y<<'\n';
		}
	}
	return 0;
}
