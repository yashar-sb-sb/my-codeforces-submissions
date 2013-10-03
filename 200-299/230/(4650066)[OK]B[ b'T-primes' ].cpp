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
	uLL inp;
	int n, d, i, lim;
	bool p;
	cin>>n;
	while(n--)
	{
		cin>>inp;
		d = sqrt(inp);
		if(d!=1&&(uLL)d*d == inp)
		{
			lim = sqrt(d);
			i=1;
			p = true;
			while(i++ < lim)
			{
				if(!(d%i))
				{
					p=false;
					break;
				}
			}
			if(p)cout<<"YES\n";
			else cout<<"NO\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}