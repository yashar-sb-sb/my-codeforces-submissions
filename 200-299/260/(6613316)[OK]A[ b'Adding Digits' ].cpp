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
	int a,b,n,i;
	cin>>a>>b>>n;
	for(i=0; i < 10 && (10*a+i)%b; ++i);
	if(i>9)
	{
		cout<<"-1";
		return 0;
	}
	cout<<a<<i;
	while(--n)cout<<'0';
	return 0;
}