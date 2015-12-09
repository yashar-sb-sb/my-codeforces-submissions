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

struct node
{
	int w,f,ind;
	pii res;
}A[100000];

bool comp(struct node &i, struct node &j)
{
	return i.w<j.w || (i.w == j.w && i.f > j.f);
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,l=1;
	pii cr;
	cr.first = 1;
	cr.second = 3;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>A[i].w>>A[i].f;
		A[i].ind=i;
	}
	sort(A,A+m,comp);
	for(int i = 0; i < m; ++i)
	{
		if(A[i].f)
		{
			++l;
			if(l>1)
			{
				A[i].res.first = l-1;
				A[i].res.second = l;
			}
		}
		else
		{
			A[i].res.first = cr.first;
			A[i].res.second = cr.second;
			if(cr.second>l){cout<<-1;return 0;}
			++cr.first;
			if(cr.first == cr.second -1)
			{
				++cr.second;
				cr.first = 1;
			}
		}
	}
	for(int i = 0; i < m; ++i)
	{
		while(A[i].ind!=i)swap(A[i],A[A[i].ind]);
	}
	for(int i = 0; i < m; ++i)
	{
		cout<<A[i].res.first<<' '<<A[i].res.second<<'\n';
	}
	return 0;
}
