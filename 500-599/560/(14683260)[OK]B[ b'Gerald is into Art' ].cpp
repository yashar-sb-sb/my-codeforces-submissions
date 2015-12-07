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

bool fl = false;
int a1,b1,a2,b2,a3,b3;

void f(int a, int b)
{
	if(a<b)swap(a,b);
	fl |= a1 >= a && b1 >= b;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	if(a1<b1)swap(a1,b1);
	
	f(a2+a3, max(b2,b3));
	f(b2+a3, max(a2,b3));
	f(a2+b3, max(b2,a3));
	f(b2+b3, max(a2,a3));
	cout<<(fl ? "YES" : "NO");
	return 0;
}
