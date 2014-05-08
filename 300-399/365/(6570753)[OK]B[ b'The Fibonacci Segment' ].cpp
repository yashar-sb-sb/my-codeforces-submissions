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
	int n,m=2,c=2,a,b,d;
	cin>>n;
	if(n<3){cout<<n;return 0;}
	cin>>a>>b;
	n-=2;
	while(n--)
	{
		cin>>d;
		if(d == a+b)++c;
		else c = 2;
		if(m<c)m=c;
		a = b;
		b = d;
	}
	cout<<m;
	return 0;
}