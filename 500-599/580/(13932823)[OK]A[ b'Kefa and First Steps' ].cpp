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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,s=0,i,p=0,m=0;
	cin>>n;
	while(n--)
	{
		cin>>i;
		if(i<p)s=1;
		else m = max(m,++s);
		p = i;
	}
	cout<<m;
	return 0;
}
