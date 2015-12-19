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
typedef pair<LL,LL> pii;

LL A[2][(LL)2e5];
LL Mi[2];
vector<pii> C[2];
vector<LL> Cs[2];
LL n, k, m, s, r0, r1;


bool f()
{
	LL i = k/2;
	LL j = k - i;
	LL st = k/4;
	while(st > 0)
	{
		if((i>C[0].size()?(LL)1e18:Mi[0]*C[0][i-1].first) > (j>C[1].size()?(LL)1e18:Mi[1]*C[1][j-1].first))
		{
			i -= st;
			j += st;
		}
		else if((i>C[0].size()?(LL)1e18:Mi[0]*C[0][i-1].first) < (j>C[1].size()?(LL)1e18:Mi[1]*C[1][j-1].first))
		{
			i += st;
			j -= st;
		}
		else break;
		st /= 2;
	}
	r0 = i;
	r1 = j;
	return s >= (r0 ? Mi[0]*Cs[0][r0-1]:0) + (r1 ? Mi[1]*Cs[1][r1-1]:0);
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>m>>k>>s;
	for(LL i = 0; i < n; ++i)cin>>A[0][i];
	for(LL i = 0; i < n; ++i)cin>>A[1][i];
	LL c, t;
	for(LL i = 0; i < m; ++i)
	{
		cin>>t>>c;
		C[t-1].push_back(pii(c,i));
	}
	if(C[0].size())
	{
		sort(C[0].begin(), C[0].end());
		Cs[0].push_back(C[0][0].first);
		for(vector<pii>::iterator i = C[0].begin() + 1; i != C[0].end(); ++i)Cs[0].push_back(*Cs[0].rbegin()+i->first);
	}
	if(C[1].size())
	{
		sort(C[1].begin(), C[1].end());
		Cs[1].push_back(C[1][0].first);
		for(vector<pii>::iterator i = C[1].begin() + 1; i != C[1].end(); ++i)Cs[1].push_back(*Cs[1].rbegin()+i->first);
	}
	Mi[0] = A[0][0];
	Mi[1] = A[1][0];
	LL i;
	int aa=1, bb=1;
	for(i = 0; i < n; ++i)
	{
		if(Mi[0] > A[0][i])
		{
			Mi[0] = min(Mi[0], A[0][i]);
			aa = i+1;
		}
		if(Mi[1] > A[1][i])
		{
			Mi[1] = min(Mi[1], A[1][i]);
			bb = i+1;
		}
		if(f())break;
	}
	cout<<r0<<' '<<r1<<'\n';
	if(i == n){cout<<-1; return 0;}
	cout<<i+1<<'\n';
	for(i = 0; i < r0; ++i)cout<<C[0][i].second+1<<' '<<aa<<'\n';
	for(i = 0; i < r1; ++i)cout<<C[1][i].second+1<<' '<<bb<<'\n';
	return 0;
}
