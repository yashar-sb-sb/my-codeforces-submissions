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

double f(int ap, int bp, int bq)
{
	if(ap<bp || ap>bp+bq)return 0.0;
	double res = 1;
	for(int i = 1; i <= bq; ++i)res *= i;
	for(int i = 1; i <= bq-ap+bp; ++i)res /= i;
	for(int i = 1; i <= ap-bp; ++i)res /= i;
	return res;
}

int main()
{
ios_base::sync_with_stdio(0);
	string a,b;
	int ap=0,bp=0,bq=0;
	cin>>a>>b;
	for(int i = 0; i < a.size(); ++i)if(a[i] == '+')++ap;
	for(int i = 0; i < b.size(); ++i)if(b[i] == '+')++bp; else if(b[i] == '?')++bq;
	cout<<setprecision(12)<<fixed<<(double)((double)(f(ap,bp,bq))/(double)(1<<bq));
	return 0;
}