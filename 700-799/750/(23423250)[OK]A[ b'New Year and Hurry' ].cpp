#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;



int main()
{
	ios_base::sync_with_stdio(0);
	int n,k,c=0;
	cin>>n>>k;
	k = 240 - k;
	for(int i = 1; i <= n; ++i)
	{
		if(i*5<=k)
		{
			++c;
			k-=i*5;
		}
	}
	cout<<c;
	return 0;
}