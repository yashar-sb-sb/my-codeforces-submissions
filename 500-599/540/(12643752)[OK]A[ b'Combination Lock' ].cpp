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
#include<list>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,res=0;
	string f,s;
	cin>>n>>f>>s;
	while(n--)
	{
		res+=min(abs(f[n]-s[n]),10-abs(f[n]-s[n]));
	}
	cout<<res;
	return 0;
}
