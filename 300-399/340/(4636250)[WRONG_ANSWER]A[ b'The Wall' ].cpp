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
	int x,y,a,b;
	cin>>x>>y>>a>>b;
	x*=y;
	y = ceil((double)a/x);
	a = b/x;
	a = a - y + 1;
	if(a < 0) a = 0;
	cout<<a;
	return 0;
}