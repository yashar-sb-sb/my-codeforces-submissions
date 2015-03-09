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
	int n,a;
	LL s=0,t=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a;
		s+=a;
	}
	--n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a;
		t+=a;
	}
	cout<<s-t<<'\n';
	s=0;
	--n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a;
		s+=a;
	}
	cout<<t-s;
	return 0;
}
