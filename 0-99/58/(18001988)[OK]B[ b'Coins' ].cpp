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
	int i = n+1;
	while(--i)
	{
		if(!(n%i))cout<<i<<' ',n=i;
	}
	return 0;
}
