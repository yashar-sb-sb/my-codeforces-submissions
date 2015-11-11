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

pii D[500000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,inp,last=0, s=0;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		D[i].second = inp;
		cin>>inp;
		D[i].first = inp;
	}
	sort(D,D+n);
	for(int i = 0; i < n; ++i)
	{
		if(D[i].second > last)
		{
			++s;
			last = D[i].first;
		}
	}
	cout<<s;
	return 0;
}
