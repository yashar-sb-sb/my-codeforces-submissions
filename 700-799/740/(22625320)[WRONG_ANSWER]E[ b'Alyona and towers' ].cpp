#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define mkp make_pair

LL S[1200008];
LL A[300002];
int n,id2;

void add(int l, int r, int num, int id = 1, int sl = 0, int sr = n+1)
{
	if(r<=sl or sr<=l)return;
	if(l<=sl and sr<=r)
	{
		S[id] += num;
		return;
	}
	int mid = (sl+sr)>>1;
	id2 = id<<1;
	S[id2] += S[id];
	S[id2|1] += S[id];
	S[id] = 0;
	add(l,r,num,id2,sl,mid);
	add(l,r,num,id2|1,mid,sr);
}

void get(int ind, int id=1, int l = 0, int r = n+1)
{
	if(l>ind or ind>=r)return;
	if(r-l < 2)
	{
		A[l] += S[id];
		S[id] = 0;
		return;
	}
	id2 = id<<1;
	S[id2] += S[id];
	S[id2|1] += S[id];
	S[id] = 0;
	int mid = (l+r)>>1;
	get(ind, id2, l, mid);
	get(ind, id2|1, mid, r);
}


multiset<int> ma;
map<int,pii> inters;

#define rem(s) ma.erase(ma.find(s))
#define ins(s) ma.insert(s)

void zp(int ind)
{
	auto it = inters.insert(mkp(ind,mkp(ind+1,ind+1))).first;
	auto nx = next(it);
	if(nx != inters.end())
	{
		if(it->second.second == nx->first)
		{
			it->second = nx->second;
			rem(nx->second.second - nx->first);
			inters.erase(nx);
		}
	}
	if(it!=inters.begin())
	{
		auto pv = prev(it);
		if(pv->second.first == it->first)
		{
			rem(pv->second.second - pv->first);
			pv->second = it->second;
			ins(pv->second.second - pv->first);
			inters.erase(it);
		}
		else ins(it->second.second - it->first);
	}
	else ins(it->second.second - it->first);
}
void zn(int ind)
{
	auto it = inters.insert(mkp(ind,mkp(ind,ind+1))).first;
	auto nx = next(it);
	if(nx != inters.end())
	{
		if(it->second.second == nx->second.first)
		{
			it->second.second = nx->second.second;
			rem(nx->second.second - nx->first);
			inters.erase(nx);
		}
	}
	if(it != inters.begin())
	{
		auto pv = prev(it);
		if(pv->second.second == it->first)
		{
			rem(pv->second.second - pv->first);
			pv->second.second = it->second.second;
			ins(pv->second.second - pv->first);
			inters.erase(it);
		}
		else ins(it->second.second - it->first);
	}
	else ins(it->second.second - it->first);
}
void pz(int ind)
{
	auto it = prev(inters.upper_bound(ind));
	auto nx = mkp(ind+1,it->second);
	rem(it->second.second - it->first);
	it->second = pii(ind,ind);
	if(it->second.second - it->first == 0)inters.erase(it);
	else ins(it->second.second - it->first);
	if(nx.second.second - nx.first > 0)inters.insert(nx),ins(nx.second.second - nx.first);
}
void nz(int ind)
{
	auto it = prev(inters.upper_bound(ind));
	auto nx = mkp(ind+1,it->second);
	rem(it->second.second - it->first);
	it->second.second = ind;
	nx.second.first = ind+1;
	if(it->second.second - it->first == 0)inters.erase(it);
	else ins(it->second.second - it->first);
	if(nx.second.second - nx.first > 0)inters.insert(nx),ins(nx.second.second - nx.first);
}
#define np(ind) {nz(ind);zp(ind);}
#define pn(ind) {pz(ind);zn(ind);}
void query(int l, int r, int d)
{
	if(!d)return;
	LL a, b;
	get(l-1);
	get(r+1);
	get(l);
	if(l!=r)get(r);
	a = A[l] - A[l-1];
	b = A[r+1] - A[r];
	add(l,r+1,d);
	A[l]+=d;
	if(l!=r)A[r]+=d;
	if(l-1>=1)
	{
		if(a<0)
		{
			if(A[l]==A[l-1])nz(l-1);
			else if(A[l]>A[l-1])np(l-1);
		}
		else if(a==0)zp(l-1);
	}
	if(r<n)
	{
		if(b>0)
		{
			if(A[r+1]==A[r])pz(r);
			else if(A[r+1]<A[r])pn(r);
		}
		else if(b==0)zn(r);
	}
	A[l]-=d;
	if(l!=r)A[r]-=d;
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n;
	int cur;
	ma.insert(0);
	for(int i = 1; i <= n; ++i)
	{
		cin>>A[i];
	}
	for(int i = 1; i < n;)
	{
		if(A[i] != A[i+1])
		{
			int ind = i;
			for(; i < n and A[i] < A[i+1]; ++i);
			pii res(i,0);
			for(; i < n and A[i] > A[i+1]; ++i);
			res.second = i;
			inters[ind] = res;
			ma.insert(i-ind);
		}
		else ++i;
	}
	int m,l,r,d;
	cin>>m;
	while(m--)
	{
		cin>>l>>r>>d;
		query(l,r,d);
		cout<<*ma.rbegin()+1<<'\n';
	}
	return 0;
}