#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<LL,LL> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp,sum=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		sum+=inp;
	}
	if(n>1)--n;
	cout<<(n==sum?"YES":"NO");
	return 0;
}