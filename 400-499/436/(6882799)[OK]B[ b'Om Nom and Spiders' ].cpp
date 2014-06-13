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

//#define Out(x,y) x<0 || y<0 || x>=n || y>=m

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

struct dirs
{
	int u;
	int l;
	int r;
}sps[2000][2000];

int res[2000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k;
	char ch;
	cin>>n>>m>>k;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>ch;
			if(ch!='.')
			{
				sps[i][j].u=0;
				sps[i][j].l=0;
				sps[i][j].r=0;
				if(ch=='U')sps[i][j].u=1;
				else if(ch=='L')sps[i][j].l=1;
				else if(ch=='R')sps[i][j].r=1;
			}
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if(2*i<n)
				res[j]+=sps[2*i][j].u;
			if(j+i<m)
				res[j]+=sps[i][j+i].l;
			if(j-i>=0)
				res[j]+=sps[i][j-i].r;
		}
	}
	for(int i = 0; i < m; ++i)
	{
		cout<<res[i]<<' ';
	}
	return 0;
}