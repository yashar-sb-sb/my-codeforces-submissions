#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int n, k, a, b, c;
	cin>>n>>k;
	cin>>a>>b;
	n = n<<1;
	while(--n)
	{
		cin>>c;
		if(k && a < b-1 && b-1 > c)
		{
			--k;
			--b;
		}
		cout<<a<<' ';
		a = b;
		b = c;
	}
	cout<<a<<' '<<b<<endl;
	return 0;
}
