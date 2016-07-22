#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	int c = (m+1)/2;
	for(int i = 0; i < n; ++i)
	{
		cout<<c<<'\n';
		if(c == m)
		{
			c = (m+1)/2;
		}
		else
		{
			if(m%2)
			{
				if(c < (m+1)/2)
				{
					c += 2 * ((m+1)/2-c);
				}
				else if(c > (m+1)/2)
				{
					c -= 1 + 2 * (c - (m+1)/2);
				}
				else --c;
			}
			else
			{
				if(c <= (m+1)/2)
				{
					c += 2 * ((m+1)/2-c)+1;
				}
				else if(c > (m+1)/2)
				{
					c -= 2 * (c - (m+1)/2);
				}
			}
		}
	}
	return 0;
}
