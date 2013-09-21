#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>
#include<iomanip>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	uLL inp,d;
	bool f[1000002];
	int p[80000],s=0,n,c;
	fill(f,f+1000002,true);
	for(int i = 2; i < 1000002;++i)
	{
		if(!f[i])continue;
		for(int j = 2*i; j < 1000002; j+=i)f[j]=false;
	}
	for(int i = 2; i < 1000002;++i)if(f[i])p[s++]=i;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		d=0;
		for(int i = 0; p[i] < sqrt(inp)+1;++i)
		{
			if(!(inp%p[i]))
			{
				if(!d)d=p[i];
				else
				{
					d = 0;
					break;
				}
			}
		}
		d*=d;
		cout<<((d&&(inp==d||inp%d))?"YES\n":"NO\n");
	}
	return 0;
}