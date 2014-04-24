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

int gcd(int a, int b){return b ? gcd(b, a%b) : a;}

int main()
{
ios_base::sync_with_stdio(0);
	int l,n,i,t;
	cin>>n;
	l=n;
	cin>>t;
	while(--l)
	{
		cin>>i;
		t = gcd(max(i,t),min(i,t));
	}
	cout<<t*n;
	return 0;
}