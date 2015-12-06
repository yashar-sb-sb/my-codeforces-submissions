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

set<int> f;

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	queue<pii> q;
	q.push(make_pair<int,int>(n,0));
	f.insert(n);
	while(q.front().first != m)
	{
		if(f.find(q.front().first-1) == f.end() && q.front().first-1)
		{
			q.push(make_pair<int,int>(q.front().first-1,q.front().second+1));
			f.insert(q.front().first-1);
		}
		if(f.find(q.front().first*2) == f.end() && q.front().first < m)
		{
			q.push(make_pair<int,int>(q.front().first * 2, q.front().second+1));
			f.insert(q.front().first * 2);
		}
		q.pop();
	}
	cout<<q.front().second;
	return 0;
}
