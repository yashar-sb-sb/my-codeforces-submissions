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
	int n,p,k,i,l;
	cin>>n>>p>>k;
	if(p-k>1)cout<<"<<";
	for(i = max(1,p-k); i < p; ++i)cout<<' '<<i;
	cout<<" ("<<i<<")";
	for(++i, l = min(n,p+k); i <= l; ++i)cout<<' '<<i;
	if(p+k<n)cout<<" >>";
	return 0;
}