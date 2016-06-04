#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int l = 1, c = 9, i = 0, n;
	cin>>n;
	--n;
	while(i + c*l <= n)
	{
		i += c*l;
		c *= 10;
		++l;
	}
	int t = n - i;
	int num = c/9 + t/l;
	t = l - t%l;
	while(--t)
	{
		num/=10;
	}
	cout<<num%10<<endl;
	return 0;
}
