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
	int n,s=0,x1,y1,x2,y2;
	cin>>n;
	while(n--)
	{
		cin>>x1>>y1>>x2>>y2;
		s+= (x2-x1+1)*(y2-y1+1);
	}
	cout<<s;
	return 0;
}
