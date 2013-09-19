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

int main()
{
ios_base::sync_with_stdio(0);
	int n,s,t,c=0,i=0,*a;
	cin>>n>>s>>t;
	a = new int [n];
	while(i<n)cin>>a[i++];
	while(s!=t&&c<n)s = a[s-1],c++;
	cout<<(c<n?c:-1);
	return 0;
}