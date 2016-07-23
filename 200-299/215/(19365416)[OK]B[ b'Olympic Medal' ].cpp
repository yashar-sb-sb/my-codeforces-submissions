#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k;
	ldb r1=0,p1=0,p2=5000,A,B,inp;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		r1 = max(inp,r1);
	}
	cin>>m;
	while(m--)
	{
		cin>>inp;
		p1 = max(inp,p1);
	}
	cin>>k;
	while(k--)
	{
		cin>>inp;
		p2 = min(p2,inp);
	}
	cin>>A>>B;
	cout.precision(20);
	cout<<sqrt(B*p1*r1*r1/(A*p2+B*p1))<<endl;
	return 0;
}
