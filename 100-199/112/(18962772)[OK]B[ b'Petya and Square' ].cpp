#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,x,y;
	cin>>n>>x>>y;
	n/=2;
	cout<<(x<n || x>n+1 || y<n || y>n+1 ?"YES":"NO")<<endl;
	return 0;
}
