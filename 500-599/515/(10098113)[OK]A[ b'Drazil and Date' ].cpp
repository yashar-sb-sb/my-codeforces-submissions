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
	int a, b, s;
	cin>>a>>b>>s;
	if(a<0)a=-a;
	if(b<0)b=-b;
	a+=b;
	if(a>s)cout<<"No";
	else if((s-a)&1)cout<<"No";
	else cout<<"Yes";
	return 0;
}
