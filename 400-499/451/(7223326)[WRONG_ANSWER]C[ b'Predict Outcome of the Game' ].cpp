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
	int t;
	LL n,k,d1,d2;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>d1>>d2;
		n-=2*d1+d2+k;
		cout<<((n>=0 && n%3 == 0)?"yes\n":"no\n");
	}
	return 0;
}