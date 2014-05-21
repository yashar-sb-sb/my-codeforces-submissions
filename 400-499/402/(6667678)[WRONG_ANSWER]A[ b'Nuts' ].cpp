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

int main()
{
ios_base::sync_with_stdio(0);
	int k, a, b, v;
	cin>>k>>a>>b>>v;
	a = a/v + (a%v?1:0);
	k = a/k + (a%k?1:0);
	cout<<((a-b>b)?a-b:k+max(0,k-b));
	return 0;
}