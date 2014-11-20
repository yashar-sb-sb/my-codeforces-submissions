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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int l=0,m=0;
	string::reverse_iterator si = s.rbegin();
	m+=(*si-'0')&1;
	l = *si/2;
	++si;
	m+=2*((l+*si-'0')&1);
	int a=1,b=1,c=1,d=1;
	while(m--)b*=2,c*=3,d*=4;
	cout<<(1+b+c+d)%5;
	return 0;
}
