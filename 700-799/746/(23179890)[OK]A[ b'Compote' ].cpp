#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int a, b, c;
	cin>>a>>b>>c;
	cout<<7*min(a,min(b/2,c/4))<<endl;
	return 0;
}