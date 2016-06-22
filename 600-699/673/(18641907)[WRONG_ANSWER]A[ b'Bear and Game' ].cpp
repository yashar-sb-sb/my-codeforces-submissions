#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,pr=0,cu;
	cin>>n;
	while(n--)
	{
		cin>>cu;
		if(cu>pr+15)
		{
			cout<<pr+15<<endl;
			return 0;
		}
		pr = cu;
	}
	cout<<90<<endl;
	return 0;
}
