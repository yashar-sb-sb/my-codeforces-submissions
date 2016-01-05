#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n, d, c, s = 0, t = 0;
	cin>>n>>d;
	while(n--)
	{
		cin>>c;
		if(c<t)
		{
			s += (t-c-1)/d+1;
			c += (t-c-1)/d*d+d;
		}
		t = c+1;
	}
	cout<<s;
	return 0;
}
