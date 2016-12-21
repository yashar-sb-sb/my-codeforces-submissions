#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, a, b;
	cin>>n;
	for(int i = 1; i <= n/i; ++i)
	{
		if(n/i*i == n)a = i, b = n/i;
	}
	cout<<a<<' '<<b<<endl;
	return 0;
}