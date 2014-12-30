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

bool F[100001];
int Di[100001];
list<pii> Tr[100001];

ldb res=0;
int d=0;
int n,a,b,l;

void f(int nod)
{
	F[nod] = true;
	++d;
	for(list<pii>::iterator i = Tr[nod].begin(); i != Tr[nod].end(); ++i)
	{
		if(!F[(*i).first])
		{
			int cur = d;
			f((*i).first);
			cur = d - cur;
			res += ((cur*(cur-1)/2)*((n-cur))+(cur)*((n-cur)*(n-cur-1)/2))*Di[(*i).second];
		}
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n;
	cout.precision(10);
	for(int i = 1; i < n; ++i)
	{
		cin>>a>>b>>l;
		Di[i] = l;
		Tr[a].push_back(make_pair(b,i));
		Tr[b].push_back(make_pair(a,i));
	}
	int q;
	cin>>q;
	for(int i = 0; i < q; ++i)
	{
		for(int j = 1; j <= n; ++j)F[j] = false;
		cin>>a>>b;
		Di[a] = b;
		d = 0;
		res = 0;
		f(1);
		cout<<fixed<<(ldb)res/(n*(n-1)*(n-2)/6)*2<<'\n';
	}
	return 0;
}
