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

int r_gcd(int a, int b){return b?r_gcd(b,a%b):a;}
int gcd(int a, int b){return a>b?r_gcd(a,b):r_gcd(b,a);}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,b,t;
	cin>>n>>m;
	if(m>n)
	{
		cout<<"0/1";
		return 0;
	}
	cin>>a;
	t=n;
	while(t--)cin>>b;
	cin>>b;
	bool f = false;
	if(a<0)f=!f;
	if(b<0)f=!f;
	if(f)cout<<'-';
	if(n>m)cout<<"Infinity";
	else
	{
		if(a<0)a*=-1;
		if(b<0)b*=-1;
		n = gcd(a,b);
		cout<<a/n<<'/'<<b/n;
	}
	return 0;
}