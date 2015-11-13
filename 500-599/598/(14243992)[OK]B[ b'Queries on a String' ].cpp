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
#include<set>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char t[10000];

int main()
{
ios_base::sync_with_stdio(0);
	int m,l,r,k;
	string s;
	cin>>s>>m;
	while(m--)
	{
		cin>>l>>r>>k;
		--l;
		k %= r-l;
		for(int i = l; i < r; ++i)
		{
			t[i-l] = s[i];
		}
		for(int i = l; i < r; ++i)
		{
			s[i] = t[(i-2*l+r-k)%(r-l)];
		}
	}
	cout<<s;
	return 0;
}
