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

set<int> se[401];
vector<int> G1[401];
vector<int> G2[401];
	int n,m,a,b;
bool F[401];

int fa(vector<int> * G)
{
	queue<pii> q;
	q.push(make_pair<int,int>(1,0));
	F[1] = true;
	int res = 0;
	while(!q.empty())
	{
		a = q.front().first;
		res = q.front().second;
		if(a == n)return res;
		q.pop();
		for(vector<int>::iterator i = G[a].begin(); i != G[a].end(); ++i)
		{
			if(!F[*i])
			{
				F[*i] = true;
				q.push(make_pair<int,int>(*i,res+1));
			}
		}
	}
	return -1;
}

int main()
{
ios_base::sync_with_stdio(0);
	bool f=false;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		G1[a].push_back(b);
		G1[b].push_back(a);
		se[a].insert(b);
		se[b].insert(a);
		if(min(a,b) == 1 && max(a,b) == n)f = true;
	}
	if(f)
	{
		for(int i = 1; i <= n; ++i)
		{
			for(int j = i + 1; j <= n; ++j)
			{
				if(se[i].find(j)==se[i].end())
				{
					G2[i].push_back(j);
					G2[j].push_back(i);
				}
			}
		}
		cout<<fa(G2);
	}
	else cout<<fa(G1);
	
	return 0;
}
