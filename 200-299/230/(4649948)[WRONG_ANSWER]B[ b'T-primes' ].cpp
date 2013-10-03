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
	uLL inp,i,c,lim;
	int n;
	cin>>n;
	while(n--)
	{
		i=0,c=0;
		cin>>inp;
		lim = sqrt(inp)+1;
		if(lim>=inp)lim = inp-1;
		while(i++ < lim)
		{
			if(!(inp%i))++c;
		}
		if(c == 2)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}