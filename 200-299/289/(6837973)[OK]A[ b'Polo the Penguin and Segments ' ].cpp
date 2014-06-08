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
	int n,k,l,r,s=0;
	cin>>n>>k;
	while(n--)
	{
		cin>>l>>r;
		s+=r-l+1;
	}
	s%=k;
	cout<<(s?k-s:0);
	return 0;
}