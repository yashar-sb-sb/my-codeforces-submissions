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
	int n,m;
	char i,j,k,l;
	cin>>n>>m;
	cin>>i;
	while(--n)cin>>j;
	cin>>k;
	while(--m)cin>>l;
	if(i!=j && k!=l)cout<<"YES";
	else cout<<"NO";
	return 0;
}