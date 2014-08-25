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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2)
	{
		cout<<x1+abs(y1-y2)<<' '<<y1<<' '<<x1+abs(y1-y2)<<' '<<y2;
	}
	else if(y1==y2)
	{
		cout<<x1<<' '<<y1+abs(x1-x2)<<' '<<x2<<' '<<y1+abs(x1-x2);
	}
	else if(abs(x1-x2)==abs(y1-y2))
	{
		cout<<x2<<' '<<y1<<' '<<x1<<' '<<y2;
	}
	else cout<<-1;
	return 0;
}