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
	int n,t;
	cin>>n>>t;
	if(t == 10 && n == 1)cout<<-1;
	else
	{
		if(t == 10)--n;
		cout<<t;
		while(--n)cout<<0;
	}
	return 0;
}
