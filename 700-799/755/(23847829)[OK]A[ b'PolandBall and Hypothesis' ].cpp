#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 1; true ; ++i)
	{
		for(int j = 2; j*j <= i*n+1; ++j)
		{
			if((i*n+1)%j==0)
			{
				return cout<<i<<endl,0;
			}
		}
	}
	return 0;
}