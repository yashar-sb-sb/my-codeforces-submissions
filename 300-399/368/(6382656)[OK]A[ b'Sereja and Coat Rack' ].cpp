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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,d,A[100],m,i=-1,s=0;
	cin>>n>>d;
	while(++i<n)cin>>A[i];
	cin>>m;
	sort(A,A+n);
	i = -1;
	while(++i<n&&i<m)s+=A[i];
	cout<<s-(i<m?(m-i)*d:0);
	return 0;
}