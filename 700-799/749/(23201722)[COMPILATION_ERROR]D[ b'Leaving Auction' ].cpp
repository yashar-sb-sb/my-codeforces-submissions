#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

pii A[200001];
int B[200001], C[200001];
vector<int> v, Cs[200001];

bool f(int m)
{
	int count=0;
	for(auto i:v)
	{
		count+=C[i]>=m;
	}
	return B[m]-count>=1;
}

bool fs(int m)
{
	int count=0;
	for(auto i:v)
	{
		count+=C[i]>=m;
	}
	return B[m]-count<=1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	memset(c,-1,sizeof(c));
	int n,c,inp;
	cin>>n;
	for(int i = 0; i < n; ++i)cin>>A[i].first>>A[i].second;
	set<int> se;
	for(int i = n-1; i >= 0; --i)
	{
		se.insert(A[i].first);
		B[i] = se.size();
		if(B[i]!=B[i+1])C[A[i].first]=i;
	}
	for(int i = 0; i < n; ++i)
	{
		Cs[A[i].first].push_back(i);
	}
	int q; cin>>q;
	while(q--)
	{
		cin>>c;
		v.clear();
		int vsz=0;
		for(int i = 0; i < c; ++i)
		{
			cin>>inp;
			v.push_back(inp);
			if(se.find(inp)!=se.end())++vsz;
		}
		if(vsz==se.size()){cout<<"0 0\n";continue;}
		int l = 0, r = n;
		while(l+1<r)
		{
			int m = (l+r)/2;
			if(f(m))l = m;
			else r = m;
		}
		int p = A[l].first;
		l = -1, r = Cs[p].size()-1;
		while(l+1<r)
		{
			int m = (l+r)/2;
			if(fs(Cs[p][m]))r = m;
			else l = m;
		}
		cout<<p<<' '<<A[Cs[p][r]].second<<'\n';
	}
	return 0;
}