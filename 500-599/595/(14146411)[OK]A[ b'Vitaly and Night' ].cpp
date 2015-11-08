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
	int n,m,s=0,i1,i2;
	cin>>n>>m;
	while(n--)
	{
		for(int i = 0; i < m; ++i)
		{
			cin>>i1>>i2;
			s+=i1|i2;
		}
	}
	cout<<s;
	return 0;
}
