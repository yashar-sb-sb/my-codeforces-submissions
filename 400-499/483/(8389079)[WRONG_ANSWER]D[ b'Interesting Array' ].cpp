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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100001][30];
int B[30];
int L[100000],R[100000],Q[100000];
pii P[200000];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m,l,r,q,j=0;
	cin>>n>>m;
	for(int i = 0; i < m; ++i)
	{
		cin>>l>>r>>q;
		L[i]=l;
		R[i]=r;
		Q[i]=q;
		P[2*i].first = l;
		P[2*i].second = q;
		P[2*i+1].first = r+1;
		P[2*i+1].second = -q;
	}
	sort(P,P+2*m);
	for(int i = 1; i <= n; ++i)
	{
		while(P[j].first==i)
		{
			int t = 1;
			for(int k = 0; k < 30; ++k)
			{
				B[k]+=(P[j].second<0?-1:1)*((t&abs(P[j].second))!=0);
				t<<=1;
			}
			++j;
		}
		for(int k = 0; k < 30; ++k)A[i][k]=B[k]+A[i-1][k];
	}
	for(int i = 0; i < m; ++i)
	{
		int t = 1;
		for(int k = 0; k < 30; ++k)
		{
			if(t&Q[i])
			{
				if(A[R[i]][k]-A[L[i]-1][k] != R[i]-L[i]+1){cout<<"NO";return 0;}
			}
			else
			{
				if(A[R[i]][k]-A[L[i]-1][k] == R[i]-L[i]+1){cout<<"NO";return 0;}
			}
			t<<=1;
		}
	}
	cout<<"YES\n";
	for(int i = 1; i <= n; ++i)
	{
		int t = 1,d=0;
		for(int k = 0; k < 30; ++k)
		{
			if(A[i][k]-A[i-1][k])d|=t;
			t<<=1;
		}
		cout<<d<<' ';
	}
	return 0;
}