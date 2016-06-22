#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,k,s=0,f,inp;
	cin>>n>>k;
	while(n--)
	{
		cin>>inp;
		f = min(f,abs(inp));
		if(inp<=0)
		{
			if(k>0)
			{
				--k;
				inp*=-1;
			}
		}
		s+=inp;
	}
	if(k&1)s+=-2*f;
	cout<<s<<endl;
	return 0;
}
