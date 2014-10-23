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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

/* --- Description ---
	Analysis : 
		in worst case for M union-find operations on N objects : N + M lg*N    ( N->lg*N : 1->0 , 2->1 , 4->2 , 16->3 , 65536->4 , 2^65536->5 , ... ) 
		! very very fast ( this algorithm reduce process time for 10^9 objects and 10^9 union-find operations from 30 years to 6 sec !!! )
	MaxDepth = lgN
	! Is linear
*/

typedef class QuickUnionImproved // WQUPC ( Weighted Quick Union Path Compression ) 
{
	public :
		
		QuickUnionImproved(int n)
		{
			len=n;
			id = new int[n];
			sz = new int[n];
			for (int i=0 ; i<n ; i++) { id[i]=i; sz[i]=1; }
		}
		
		void connect(int p,int q)
		{
			int i=root(p);
			int j=root(q);
			if ( sz[i]<sz[j] )	{ id[i]=j; sz[j]+=sz[i]; }
			else				{ id[j]=i; sz[i]+=sz[j]; }
		}
		
		int root(int p)
		{
			while (p!=id[p]) 
			{
				id[p] = id[id[p]];
				p=id[p];
			}
			return p;
		}
		
		bool connected(int p,int q) { return root(p)==root(q); }
		
		int getId(int i) { return id[i]; }
		
		int getLen() { return len; }
	
	private :
		int *id;
		int *sz;
		int len;
} QUI;


int A[2000][2000],B[2000][2000];
pair<int, pii> P[1999000];
QUI q(2000);
list<int> T[2000];
bool F[2000], f;
int J;

void dfs(int i, int d = 0)
{
	if(A[J][i] != d)f = true;
	if(f)return;
	F[i] = true;
	for(list<int>::iterator j = T[i].begin(); j != T[i].end(); ++j)
	{
		if(!F[*j])
		{
			dfs(*j,d+A[i][*j]);
		}
	}
	F[i] = false;
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,t=0,j;
	cin>>n;
	for(int i=0; i < n; ++i)
	{
		for(int j=0; j < n; ++j)
		{
			cin>>A[i][j];
			if(i==j && A[i][j] != 0 || i<j && (A[i][j] != A[j][i] || A[i][j] == 0)){cout<<"NO"; return 0;}
			if(i<j)
			{
				P[t].first = A[i][j];
				P[t].second.first = i;
				P[t++].second.second = j;
			}
		}
	}
	sort(P, P+t);
	j = n-1;
	for(int i = 0; j && i < t; ++i)
	{
		if(!q.connected(P[i].second.first,P[i].second.first))
		{
			T[P[i].second.first].push_back(P[i].second.second);
			T[P[i].second.second].push_back(P[i].second.first);
			q.connect(P[i].second.first,P[i].second.first);
			--j;
		}
	}
	for(int i = 0; i < n; ++i)
	{
		J = i;
		dfs(i);
	}
	cout<<(f?"NO":"YES");
	return 0;
}
