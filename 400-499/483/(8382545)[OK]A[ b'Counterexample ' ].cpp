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

uLL gcd(uLL a, uLL b){return b?gcd(b,a%b):a;}

int main()
{
ios_base::sync_with_stdio(0);
	uLL l,r,a,b,c;
	cin>>l>>r;
	for(a = l; a<=r; ++a)
	{
		for(b = a+1; b<=r; ++b)
		{
			for(c = b+1; c<=r; ++c)
			{
				if(gcd(b,a) == 1 && gcd(c,b) == 1 && gcd(c,a) != 1){cout<<a<<' '<<b<<' '<<c; return 0;}
			}
		}
	}
	cout<<-1;
	return 0;
}