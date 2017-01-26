#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

#define mkp make_pair
template<typename T>
void Read(T &out)
{
	out = 0;
	int c;
	while(c = getchar(), c>='0' and c<='9')
	{
		out = (out<<3) + (out<<1) + c - '0';
	}
}

void Write(int in)
{
	int mask = 1;
	while(mask<=in)mask = (mask<<3)+(mask<<1);
	mask/=10;
	while(mask)
	{
		putchar(in/mask%10+'0');
		mask/=10;
	}
}

LL A[300002];
LL B[300002];
LL S[300003];
int n;

void Fadd(int ind, int d)
{
	while(ind<=n)
	{
		S[ind] += d;
		ind += ind&-ind;
	}
}

LL Fsum(int ind)
{
	LL sum = 0;
	while(ind>0)
	{
		sum += S[ind];
		ind -= ind&-ind;
	}
	return sum;
}

void add(int l, int r, int d)
{
	Fadd(l,d);
	Fadd(r,-d);
}

void get(int ind)
{
	A[ind] = B[ind] + Fsum(ind);
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
	Read(n);
	int cur;
	ma.insert(0);
	for(int i = 1; i <= n; ++i)
	{
		Read(B[i]);
	}
	for(int i = 1; i < n;)
	{
		if(B[i] != B[i+1])
		{
			int ind = i;
			for(; i < n and B[i] < B[i+1]; ++i);
			pii res(i,0);
			for(; i < n and B[i] > B[i+1]; ++i);
			res.second = i;
			inters[ind] = res;
			ma.insert(i-ind);
		}
		else ++i;
	}
	int m,l,r,d;
	Read(m);++m;
	while(--m)
	{
		Read(l);
		Read(r);
		Read(d);
		query(l,r,d);
		Write(*ma.rbegin()+1);
		putchar('\n');
	}
	return 0;
}