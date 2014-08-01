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
	int m,n;
	cin>>m>>n;
	ldb ans=0;
	for(int i = 1; i <= m; ++i)
	{
		ans+=(ldb)i*(pow((ldb)i/m,(ldb)n)-pow((ldb)(i-1)/m,(ldb)n));
	}
	std::cout << std::fixed;
	cout<<setprecision(12)<<ans;
	return 0;
}