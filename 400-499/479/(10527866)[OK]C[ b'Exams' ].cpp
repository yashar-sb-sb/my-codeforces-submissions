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

pii A[5000];

bool f(pii i, pii j)
{
	return i.first < j.first || (i.first == j.first && i.second < j.second);
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,c=0;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i].first>>A[i].second;
	sort(A,A+n,f);
	for(int i = 0; i < n; ++i)
	{
		if(min(A[i].first, A[i].second) < c) c = max(A[i].first,A[i].second);
		else c = min(A[i].first,A[i].second);
	}
	cout<<c;
	return 0;
}
