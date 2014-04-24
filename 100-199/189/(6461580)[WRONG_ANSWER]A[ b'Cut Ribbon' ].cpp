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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int a,b,c;

int max(int n)
{
	int r=1;
	if(a+a==n)r=max(r,2*max(a));
	if(a+b==n)r=max(r,max(a)+max(b));
	if(a+c==n)r=max(r,max(a)+max(c));
	if(b+b==n)r=max(r,2*max(b));
	if(b+c==n)r=max(r,max(b)+max(c));
	if(c+c==n)r=max(r,2*max(c));
	return r;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n>>a>>b>>c;
	cout<<max(n);
	return 0;
}