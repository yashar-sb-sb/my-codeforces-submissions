#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,same = 0,cu = 0,ma= 0,inp,pr=0;
	bool f = true;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		if(f && inp>pr)
		{
			ma = max(cu,ma);
			cu = same+1;
			same = 1;
			f = false;
		}
		else if(inp == pr)
		{
			++same;
			++cu;
		}
		else
		{
			++cu;
			if(inp<pr)f = true;
			same = 1;
		}
		pr = inp;
	}
	cout<<max(cu,ma)<<endl;
	return 0;
}
