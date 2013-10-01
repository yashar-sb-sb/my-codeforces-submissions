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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int m=0,n,j,T[100001],A[100001],D[100001];

int main()
{
ios_base::sync_with_stdio(0);
	vector<vector<int> > vs;
	cin>>n;
	for(int i = 1; i <= n; ++i)cin>>T[i];
	for(int i = 1; i <= n; ++i)cin>>A[i];
	fill(D,D+n+1,0);
	for(int i = 1; i <=n; ++i)
	{
		if(D[A[i]]>0)
		{
			A[D[A[i]]]=0;
			A[i]=0;
		}
		else
		{
			D[A[i]] = i;
		}
	}
	for(int i = 1; i <= n; ++i)
	{
		if(T[i])
		{
			j=i;
			vector<int> v;
            v.push_back(j);
            j=A[j];
			while(j&&A[j]&&!T[j])
			{
				v.push_back(j);
				j = A[j];
			}
            if(j&&!T[j])v.push_back(j);
			j=v.size();
			if(m<j)m=j;
			vs.push_back(v);
		}
	}
	int k;
	for(k=0;vs[k].size()<m;++k);
	cout<<m<<'\n'<<vs[k][m-1];
	for(int i = m-2; i > -1; --i)cout<<' '<<vs[k][i];
	return 0;
}