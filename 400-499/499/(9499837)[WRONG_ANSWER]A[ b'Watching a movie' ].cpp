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
	int n,x,tr=0,res=0,l,r;
	cin>>n>>x;
	for(int i = 0; i < n; ++i)
	{
		cin>>l>>r;
		res+=(l-tr-1)%3+r-l+1;
		tr = r;
	}
	cout<<res;
	return 0;
}
