#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n, m = 0, a;
	cin>>n;
	LL r = 0;
	for(int i = 0; i < n; ++i)
	{
		cin>>a;
		if(a&1)m = m ? min(m,a): a;
		r += a;
	}
	cout<< r - (r&1)*m;
	return 0;
}
