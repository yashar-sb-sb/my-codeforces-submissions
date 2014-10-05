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
	int n,i,j;
	cin>>n>>i>>j;
	if(n==i)n=j;
	else if(n==j)n=i;
	cin>>i>>j;
	if(n==i)n=j;
	else if(n==j)n=i;
	cin>>i>>j;
	if(n==i)n=j;
	else if(n==j)n=i;
	cout<<n;
	return 0;
}