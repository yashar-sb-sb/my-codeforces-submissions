#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
	int n,m,s;
	cin>>n>>m;
	s = n*(n+1)/2;
	m-= m/s*s;
	s = (sqrt(1+8*m)-1)/2;
	cout<<m-s*(s+1)/2;
	return 0;
}