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

int X[2000*2000],Y[2000*2000],dx[2000*2000],dy[2000*2000],res[2000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,k,cs=0;
	char ch;
	cin>>n>>m>>k;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>ch;
			if(ch!='.')
			{
				X[cs]=i;
				Y[cs]=j;
				if(ch=='U')dx[cs]=-1;
				else if(ch=='D')dx[cs]= 1;
				else if(ch=='L')dy[cs]=-1;
				else if(ch=='R')dy[cs]= 1;
				++cs;
			}
		}
	}
	for(int i = 0; i <= n; ++i)
	{
		for(int j = 0; j < k; ++j)
		{
			bool tb = X[j]<0 || Y[j]<0 || X[j]>=n || Y[j]>=m;
			if(X[j]==i && !tb)++res[Y[j]];
		}
		int tt=0;
		for(int j = 0; j < k; ++j)
		{
			X[j]+=dx[j];
			Y[j]+=dy[j];
			bool tb = X[j]<0 || Y[j]<0 || X[j]>=n || Y[j]>=m;
			X[tt]=X[j];
			Y[tt]=Y[j];
			dx[tt]=dx[j];
			dy[tt]=dy[j];
			if(!tb)
			{
				++tt;
			}
		}
		k=tt;
	}
	for(int i = 0; i < m; ++i)
	{
		cout<<res[i]<<' ';
	}
	return 0;
}