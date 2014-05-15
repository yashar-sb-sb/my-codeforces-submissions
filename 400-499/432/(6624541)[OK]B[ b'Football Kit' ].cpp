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
#include<cstdio>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int ho[100000];
int caw[100000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,ch;
	fill(ho,ho+100000,0);
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>ch>>caw[i];
		++ho[ch];
	}
	for(int i = 0; i < n; ++i)
	{
		cout<<n-1+ho[caw[i]]<<' '<<n-1-ho[caw[i]]<<'\n';
	}
	return 0;
}