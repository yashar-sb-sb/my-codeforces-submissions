#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL n,lg=0,g=0,m=1e9+1,bg=0,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp < m)
		{
			m = inp;
			lg = i;
			g = 0;
			bg = lg;
		}
		else if(inp == m)
		{
			if(g>bg)bg = g;
			g = 0;
		}
		else
		{
			++g;
		}
	}
	bg = max(bg,lg + g);
	cout<<bg*(m+1) + (n-bg)*m<<endl;
	return 0;
}
