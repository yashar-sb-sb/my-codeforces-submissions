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
	int n,m;
	char a,b;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		cin>>a;
		if(a==b)
		{
			cout<<"NO";
			return 0;
		}
		b = a;
		for(int i = 1; i < m; ++i)
		{
			cin>>b;
			if(a!=b)
			{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}