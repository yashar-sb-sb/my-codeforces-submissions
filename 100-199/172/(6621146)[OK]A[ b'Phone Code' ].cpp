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
	int n,m,i;
	string c,t;
	cin>>n;
	--n;
	cin>>(n%2?c:t);
	m = (n%2?c:t).size();
	while(n--)
	{
		cin>>(n%2?c:t);
		for(i=0; i < m && c[i]==t[i]; ++i);
		if(i<m)m=i;
	}
	cout<<m;
	return 0;
}