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
	int n,s=0,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		s+=inp;
	}
	cout<<(s%n?n-1:n);
	return 0;
}