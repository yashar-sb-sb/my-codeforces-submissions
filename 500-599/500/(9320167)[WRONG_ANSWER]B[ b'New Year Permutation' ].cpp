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

int A[300];
QUI qq(300);

int main()
{
ios_base::sync_with_stdio(0);
	int n,mi;
	char ch='1';
	cin>>n;
	for(int i = 0; i < n; ++i);//cin>>A[i];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j){if(ch == '1')qq.connect(i,j);}
	}
	for(int i = 0; i < n; ++i)
	{
		mi = i;
		for(int j = i+1; j < n; ++j)
		{
			if(qq.connected(i,j) && A[mi]>A[j])mi = j;
		}
		cout<<A[mi]<<' ';
		A[mi] = A[i];
	}
	return 0;
}
