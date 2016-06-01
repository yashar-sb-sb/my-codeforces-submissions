#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,p,x,y,inp;
	cin>>n>>k>>p>>x>>y;
	int s = 0,l = n/2, r = n/2+1;
	for(int i = 0; i < k; ++i)
	{
		cin>>inp;
		s += inp;
		if(inp<y)--l;
		else --r;
	}
	if(l < 0)return cout<<-1,0;
	l -= max(-r,0);
	r = max(0,r);
	if(r*y + s + l > x)return cout<<-1,0;
	while(l--)cout<<"1 ";
	while(r--)cout<<y<<' ';cout<<'\n';
	return 0;
}
