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
	int n,k;
	cin>>n>>k;
	for(int i = 0; i < k+1; ++i)
	{
		if(i%2)cout<<k-i/2+1<<' ';
		else cout<<i/2+1<<' ';
	}
	for(int i = k+2; i <= n; ++i)cout<<i<<' ';
	return 0;
}