#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,a,b,c,d,t;
	LL r = 0;
	cin>>n>>a>>b>>c>>d;
	for(int i = 1; i <= n; ++i)
	{
		t = b + i - c;
		if(t < 1 || t > n)continue;
		t = a + t - d;
		if(t < 1 || t > n)continue;
		t = c + t - b;
		if(t >= 1 && t <= n)r += n;
	}
	cout<<r;
	return 0;
}
