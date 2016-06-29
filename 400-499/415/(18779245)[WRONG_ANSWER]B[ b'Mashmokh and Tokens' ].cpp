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
	cin>>n>>a>>b;
	while(n--)
	{
		cin>>inp;
		cout<<(inp*a%b)/a<<' ';
	}
	return 0;
}
