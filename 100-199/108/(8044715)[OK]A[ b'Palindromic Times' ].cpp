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
	char c;
	int h,m;
	cin>>c;
	h = 10*(c-'0');
	cin>>c;
	h+=c-'0';
	cin>>c>>c;
	m = 10*(c-'0');
	cin>>c;
	m+=c-'0';
b:
	if(h%10<6)
	{
		if(h%10*10+h/10>m)
		{
			m = h%10*10+h/10;
		}
		else
		{
			++h;
			h%=24;
			m=-1;
			goto b;
		}
	}
	else
	{
		m = h/10+1;
		h=h/10*10+10;
	}
	cout<<h/10<<h%10<<':'<<m/10<<m%10;
	return 0;
}