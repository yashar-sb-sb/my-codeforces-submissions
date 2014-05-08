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

int gcd(int a, int b){return b?gcd(b,a%b):a;}

int main()
{
ios_base::sync_with_stdio(0);
	int a,b,c;
	cin>>a>>b;
	if(b>a)a = b;
	c = 7 - a;
	b = gcd(6,c);
	cout<<c/b<<'/'<<6/b;
	return 0;
}