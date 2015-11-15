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
#include<bitset>
#include<string>
#include<cstdio>
#include<list>
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,ax,ix,ay,iy,inp;
	cin>>n;
	cin>>ax>>ay;
	ix = ax;
	iy = ay;
	while(--n)
	{
		cin>>inp;
		ax = max(inp,ax);
		ix = min(inp,ix);
		cin>>inp;
		ay = max(inp,ay);
		iy = min(inp,iy);
	}
	if(ax == ix || ay == iy)cout<< -1;
	else cout<<(ax-ix)*(ay-iy);
	return 0;
}
