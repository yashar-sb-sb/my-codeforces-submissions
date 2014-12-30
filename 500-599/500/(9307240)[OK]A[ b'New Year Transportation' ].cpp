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
	int n, t, d=1, k;
	cin>>n>>t;
	int i = 1;
	while(d<t)
	{
		cin>>k;
		if(i==d)d+=k;
		++i;
	}
	if(t==d)cout<<"YES";
	else cout<<"NO";
	return 0;
}
