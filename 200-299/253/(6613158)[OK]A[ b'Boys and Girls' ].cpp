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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n>m)
	{
		n-=m;
		while(m--)cout<<"BG";
		while(n--)cout<<"B";
	}
	else
	{
		m-=n;
		while(n--)cout<<"GB";
		while(m--)cout<<"G";
	}
	return 0;
}