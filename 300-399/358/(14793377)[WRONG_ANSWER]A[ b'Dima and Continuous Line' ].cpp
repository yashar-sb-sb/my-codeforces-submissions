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
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pair<pii,int> A[1998];

int main()
{
ios_base::sync_with_stdio(0);
	//ifstream fin("pro.in");
	//ofstream fout("pro.out");
	int n, p, c = 0;
	cin>>n>>p;
	while(--n)
	{
		A[c].second = n;
		A[c].first.first = p;
		cin>>p;
		A[c++].first.second = -p;
		A[c].second = n;
		A[c].first.second = -A[c-1].first.first;
		A[c++].first.first = p;
	}
	sort(A, A+c);
	stack<int> s;
	for(int i = 0; i < c; ++i)
	{
		if(s.empty()||s.top() != A[i].second)s.push(A[i].second);
		else s.pop();
	}
	cout<<(s.empty() ? "no" : "yes");
	return 0;
}
