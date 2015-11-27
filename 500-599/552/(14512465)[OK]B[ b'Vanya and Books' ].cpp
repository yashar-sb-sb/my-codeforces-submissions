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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	LL n,a=0,res=0,i = 1;
	cin>>n;
	while(10*a+9 < n)
	{
		res += 9*i++ *(a+1) ;
		a = a *10 + 9;
	}
	res += (n - a)*i;
	cout << res;
	return 0;
}
