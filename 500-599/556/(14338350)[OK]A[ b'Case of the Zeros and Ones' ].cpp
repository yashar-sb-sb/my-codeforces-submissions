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
	int n,a=0;
	char inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp == '0')++a;
	}
	cout<<n-2*min(a,n-a);
	return 0;
}
