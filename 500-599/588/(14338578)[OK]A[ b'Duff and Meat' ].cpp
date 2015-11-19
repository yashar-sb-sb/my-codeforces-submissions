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
	int n,a,inp,p=100,s=0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cin>>inp;
		p=min(inp,p);
		s += a*p;
	}
	cout<<s;
	return 0;
}
