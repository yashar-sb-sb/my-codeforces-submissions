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
	int n,k;
	cin>>n>>k;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < i; ++j)cout<<"0 ";
		cout<<k;
		for(int j = i + 1; j < n; ++j)cout<<" 0";
		cout<<'\n';
	}
	return 0;
}