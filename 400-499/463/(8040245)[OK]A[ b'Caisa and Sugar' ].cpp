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
	int n,s,m=-1,i,j;
	cin>>n>>s;
	while(n--)
	{
		cin>>i>>j;
		if(i*100+j<=s*100)m = max(m, (100-j)%100);
	}
	cout<<m;
	return 0;
}