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

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	queue<pii> q;
	q.push(make_pair<int,int>(n,0));
	while(q.front().first != m)
	{
		if(q.front().first-1)q.push(make_pair<int,int>(q.front().first-1,q.front().second+1));
		if(q.front().first < m)q.push(make_pair<int,int>(q.front().first * 2, q.front().second+1));
		q.pop();
	}
	cout<<q.front().second;
	return 0;
}
