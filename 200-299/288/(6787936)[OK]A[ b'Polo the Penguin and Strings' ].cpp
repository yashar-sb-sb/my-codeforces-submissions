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
	int n,k,i,l;
	cin>>n>>k;
	if(k>n||(k==1&&n>1)){cout<<"-1";return 0;}
	l=min(n,n-k+2);
	for(i = 0; i < l; ++i)
	{
		cout<<(i&1?"b":"a");
	}
	for( ; i < n; ++i)
	{
		cout<<(char)('c'+i-l);
	}
	return 0;
}