#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;
typedef pair<int,vector<int>> piv;

int A[100002];
int S[400012];
int n;
vector<int> M[400012];

void build(int id = 1, int sl = 1, int sr = n+1)
{
	if(sr-sl<2)
	{
		S[id] = A[sl];
		M[id].push_back(sl);
		return;
	}
	int mid = (sl+sr)>>1;
	int idl = id<<1;
	int idr = idl|1;
	build(idl,sl,mid);
	build(idr,mid,sr);
	S[id] = min(S[idl],S[idr]);
	if(S[idl] == S[id])
		for(int i:M[idl])
			M[id].push_back(i);
	if(S[idr] == S[id])
		for(int i:M[idr])
			M[id].push_back(i);
}



void _getmin(int l, int r, vector<int> &ans, int id = 1, int sl = 1, int sr = n+1)
{
	if(r<=sl or sr<=l)return;
	if(l<=sl and sr<=r)
	{
		ans.push_back(id);
		return;
	}
	int mid = (sl+sr)>>1;
	int idl = id<<1;
	int idr = idl|1;
	_getmin(l,r,ans,idl,sl,mid);
	_getmin(l,r,ans,idr,mid,sr);
}

piv getmin(int l, int r)
{
	++r;
	int mi = 1000000;
	vector<int> ans;
	_getmin(l,r,ans);
	for(int i:ans)
		mi = min(S[i],mi);
	piv res(mi,vector<int>());
	for(int i:ans)
		if(S[i] == mi)
			for(int j:M[i])
				res.second.push_back(j);
	return res;
}

vector<pii> ans;

void f(int l = 1, int r = n, int mi = 0)
{
	if(l>r)return;
	if(l==r)
	{
		while(mi<A[l])
		{
			ans.push_back(pii(l,r));
			++mi;
		}
		return;
	}
	piv m = getmin(l,r);
	while(mi<m.first)
	{
		ans.push_back(pii(l,r));
		++mi;
	}
	f(l,m.second[0]-1,mi);
	for(int i = 1; i < m.second.size(); ++i)
		f(m.second[i-1]+1,m.second[i]-1,mi);
	f(*m.second.rbegin()+1,r,mi);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
    	cin>>A[i];
    }
    build();
    int l,r;
    f();
    cout<<ans.size()<<'\n';
    for(auto i:ans)
    	cout<<i.first<<' '<<i.second<<'\n';
	return 0;
}
