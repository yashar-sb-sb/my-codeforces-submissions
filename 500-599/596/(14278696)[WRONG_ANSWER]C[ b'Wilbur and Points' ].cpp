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

pair<pii,int> w[100000];
pii A[100000];

bool f(pii i, pii j)
{
	return i.second - i.first < j.second - j.first;
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
		cin>>w[i].first.first;
		w[i].first.second = i;
	}
	sort(w,w+n);
	sort(A,A+n,f);
	for(int i = 0; i < n; ++i)
	{
		if(A[i].second - A[i].first != w[i].first.first){cout<<"NO"; return 0;}
		w[i].second = i;
	}
	for(int i = 0; i < n; ++i)
	{
		while(w[i].first.second != i)swap(w[i],w[w[i].first.second]);
	}
	cout<<"YES";
	for(int i = 0; i < n; ++i)cout<<'\n'<<A[w[i].second].first<<' '<<A[w[i].second].second;
	return 0;
}
