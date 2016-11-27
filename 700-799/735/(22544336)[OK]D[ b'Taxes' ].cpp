#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL n;
	cin>>n;
	if(n==2)cout<<1;
	else if(n==3)cout<<1;
	else if(n % 2==0)cout<<2;
	else
	{
		for(int i = 2; i*i <= n; ++i)
		{
			if(n%i==0)
			{
				n-=2;
				for(int j =2; j*j <= n; ++j)
				{
					if(n%j==0)return cout<<3,0;
				}
				return cout<<2,0;
			}
		}
		cout<<1;
	}
}