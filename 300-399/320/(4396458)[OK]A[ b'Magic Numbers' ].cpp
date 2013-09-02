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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool t(int n)
{
	if(!n)return true;
	if(n%1000 == 144)return t(n/1000);
	if(n%100 == 14)return t(n/100);
	if(n%10 == 1)return t(n/10);
	return false;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	cout<<(t(n)?"YES":"NO");
	return 0;
}