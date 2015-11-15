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

pii w[100000];
pair<LL,LL> A[100000];
map<LL,bool> ma;

bool f(pii i, pii j)
{
	return i.second - i.first < j.second - j.first;
}

bool fa(pii i, pii j)
{
	return i.second + i.first < j.second + j.first;
}

bool fu(LL f, LL s)
{
	if(f<0 || s<0)return true;
	return ma[(f<<32)+s];
}

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>A[i].first>>A[i].second;
	}
	for(int i = 0; i < n; ++i)
	{
		cin>>w[i].first;
		w[i].second = i;
	}
	sort(w,w+n);
	sort(A,A+n,fa);
	stable_sort(A,A+n,f);
	for(int i = 0; i < n; ++i)
	{
		if(A[i].second - A[i].first != w[i].first){cout<<"NO"; return 0;}
	}
	for(int i = 0; i < n; ++i)
	{
		while(w[i].second != i){swap(A[i],A[w[i].second]);swap(w[i],w[w[i].second]);};
	}
	for(int i = 0; i < n; ++i)
	{
		if(fu(A[i].first-1,A[i].second)&&fu(A[i].first,A[i].second-1))ma[(A[i].first<<32)+A[i].second] = true;
		else {cout<<"NO"; return 0;}
	}
	cout<<"YES";
	for(int i = 0; i < n; ++i)cout<<'\n'<<A[i].first<<' '<<A[i].second;
	return 0;
}

