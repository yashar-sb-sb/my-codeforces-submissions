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

map<char,bool> m;

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	char c,d = 'a' ^ 'A';
	n=-26;
	while(cin>>c)
	{
		c|=d;
		if(!m[c])
		{
			++n;
			m[c]=true;
		}
	}
	cout<<(n?"NO":"YES");
	return 0;
}
