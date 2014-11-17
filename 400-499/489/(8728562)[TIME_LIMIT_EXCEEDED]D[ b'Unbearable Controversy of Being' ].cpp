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

vector<int> G[3000];
int A[4];
int main()
{
ios_base::sync_with_stdio(0);
	int n,m,a,b;
	LL s=0;
	cin>>n>>m;
	while(m--)
	{
		cin>>a>>b;
		G[a-1].push_back(b-1);
	}
	for(int i = 0; i < n; ++i)sort(G[i].begin(),G[i].end());
	for(int i = 0; i < n; ++i)
	{
		for(vector<int>::iterator ii = G[i].begin(); ii != G[i].end(); ++ii)
		{
			for(vector<int>::iterator jj = ii + 1; jj != G[i].end(); ++jj)
			{
				int k=0, l=0, kk = G[*ii].size(), ll = G[*jj].size();
				while(k<kk && l<ll)
				{
					if(G[*ii][k] == G[*jj][l])
					{
						A[3]=G[*ii][k];
						++l;
						++k;
						A[0]=i;
						A[1]=*ii;
						A[2]=*jj;
						sort(A,A+4);
						if(A[0]!=A[1] && A[1]!=A[2] && A[2]!=A[3])++s;
					}
					else if(G[*ii][k] < G[*jj][l])++k;
					else ++l;
				}
			}
		}
	}
	cout<<s;
	return 0;
}