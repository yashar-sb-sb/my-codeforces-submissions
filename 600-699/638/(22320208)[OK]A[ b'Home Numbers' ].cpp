#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a;
	cin>>n>>a;
	if(a%2==0)
	{
		a = n - a + 1;
	}
	cout<<(a+1)/2;
	return 0;
}