#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int m, n, a=0, b, c=0;
	cin >>m>>n;
	for(int a = 0; a <= m && a <= n; ++a)
	{
		for(int b = 0; b*b+a <= m && b+a*a <=n; ++b)
		{
			if(b*b+a == m && b+a*a ==n)++c;
		}
	}
	cout<<c;
	return 0;
}