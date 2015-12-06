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

set<int> s;

int main()
{
ios_base::sync_with_stdio(0);
	int n,t,res=0;
	char a;
	cin>> n;
	for(int i = 0; i < n; ++i)
	{
		cin>>a>>t;
		if(a == '+')s.insert(t), res = max(res,(int)s.size());
		else if(s.find(t)==s.end())++res;
		else s.erase(t);
	}
	cout<<res;
	return 0;
}
