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

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		if(i<=n/2)
		{
			for(int j = 0; j < (n-2*i-1)/2; ++j)cout<<'*';
			for(int j = 0; j < 2*i+1; ++j)cout<<'D';
			for(int j = 0; j < (n-2*i-1)/2; ++j)cout<<'*';
		}
		else
		{
			int t = i;
			i = n - i - 1;
			for(int j = 0; j < (n-2*i-1)/2; ++j)cout<<'*';
			for(int j = 0; j < 2*i+1; ++j)cout<<'D';
			for(int j = 0; j < (n-2*i-1)/2; ++j)cout<<'*';
			i = t;
		}
		cout<<'\n';
	}
	return 0;
}