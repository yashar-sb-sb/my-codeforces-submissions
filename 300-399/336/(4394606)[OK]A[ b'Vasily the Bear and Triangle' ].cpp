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
	int x,y,x1,y2;
	cin>>x>>y;
	x1 = x+x/abs(x)*abs(y);
	y2 = y+y/abs(y)*abs(x);
	if(x1<0)
		cout<<x1<<" 0 0 "<<y2;
	else
		cout<<"0 "<<y2<<' '<<x1<<" 0";
	return 0;
}