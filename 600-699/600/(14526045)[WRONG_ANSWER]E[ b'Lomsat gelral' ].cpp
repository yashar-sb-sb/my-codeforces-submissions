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

vector <LL> T[100001];
LL C[100001];
LL S[100001];


struct node
{
	LL k;
	map<LL,pair<LL,set<LL> > > s;
	map<LL,LL> c;
};

struct comp
{
    bool operator()(struct node a, struct node b)
    {
        return a.k < b.k;
    }
};

struct node f(LL v)
{
	struct node n;
	set<LL> s;
	s.insert(C[v]);
	n.s[1] = make_pair<LL, set<LL> >(C[v],s);
	n.c[C[v]] = 1;
	priority_queue<struct node, vector<struct node>, comp> pq;
	n.k=0;
	pq.push(n);
	for(vector<LL>::iterator i = T[v].begin(); i != T[v].end(); ++i)
	{
		pq.push(f(*i));
	}
	while(pq.size() > 1)
	{
		struct node n1 = pq.top();
		pq.pop();
		struct node n2 = pq.top();
		pq.pop();
		for(map<LL,LL>::iterator i = n2.c.begin(); i != n2.c.end(); ++i)
		{
			n1.s[n1.c[i->first]].first-=i->first;
			n1.s[n1.c[i->first]].second.erase(i->first);
			if(n1.s[n1.c[i->first]].first == 0)n1.s.erase(n1.c[i->first]);
			n1.c[i->first] += i->second;
			n1.s[n1.c[i->first]].first+=i->first;
			n1.s[n1.c[i->first]].second.insert(i->first);
		}
		n1.k += n2.k;
		pq.push(n1);
		
	}
	S[v] = pq.top().s.rbegin()->second.first;
	return pq.top();
}

int main()
{
ios_base::sync_with_stdio(0);
	LL n,a,b;
	cin>>n;
	for(LL i = 1; i <= n; ++i)cin>>C[i];
	for(LL i = 1; i < n; ++i)
	{
		cin>>a>>b;
		T[a].push_back(b);
	}
	f(1);
	for(LL i = 1; i <= n; ++i)cout<<S[i]<<' ';cout<<'
';
	return 0;
}