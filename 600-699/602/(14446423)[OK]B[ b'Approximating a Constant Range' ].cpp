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

int A[100000];

int main()
{
ios_base::sync_with_stdio(0);
	multiset<int> s;
	int n,b = 0, r = 0, m = 0, inp;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		s.insert(inp);
		A[r++] = inp;
		while(*s.rbegin() > 1 + *s.begin())s.erase(s.find(A[b++]));
		m = max(m,(int)s.size());
	}
	cout<< m;
	return 0;
}
