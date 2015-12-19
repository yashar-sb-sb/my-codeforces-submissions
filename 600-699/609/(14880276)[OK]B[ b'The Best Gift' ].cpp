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
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[11];

int main()
{
ios_base::sync_with_stdio(0);
	LL n, m;
	cin>>n>>m;
	while(n--)
	{
		cin>>m;
		++A[m];
	}
	++n;
	for(int i = 0; i < 10; ++i)
		for(int j = i + 1; j < 11; ++j)
			n+= A[i] * A[j];
	cout<<n;
	return 0;
}
