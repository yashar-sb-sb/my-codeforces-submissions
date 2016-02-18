#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	ldb a, b, c;
	cin>>a>>b>>c;
	ldb r1 = (-b + (sqrt(b*b-4*a*c)))/2/a;
	ldb r2 = (-b - (sqrt(b*b-4*a*c)))/2/a;
	cout.precision(20);
	cout<<max(r1,r2)<<'\n'<<min(r1,r2);
	return 0;
}