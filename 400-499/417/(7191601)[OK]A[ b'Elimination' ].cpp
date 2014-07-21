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
	int c,d,n,m,k;
	cin>>c>>d>>n>>m>>k;
	cout<<(n*m-k<=0?0:min((n*m-k)/n*c,(n*m-k)/n*n*d)+min(c,(n*m-k)%n*d));
	return 0;
}