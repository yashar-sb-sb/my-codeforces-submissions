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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,i=4,a,b,c,d;
	cin>>n;
	while(i--)
	{
		cin>>a>>b>>c>>d;
		if(min(a,b)+min(c,d)<=n){cout<<4-i<<' '<<min(a,b)<<' '<<min(c,d); return 0;}
	}
	cout<<-1;
	return 0;
}