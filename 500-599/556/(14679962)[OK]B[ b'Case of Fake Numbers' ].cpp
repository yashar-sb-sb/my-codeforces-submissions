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
	int n,f,inp;
	cin>>n>>f;
	for(int i = 1; i < n; ++i)
	{
		cin>>inp;
		if((inp+f*(-1+((i&1)<<1))+n)%n != i){cout<<"No";return 0;}
	}
	cout<<"Yes";
	return 0;
}
