#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100][100];

int Qt[10000];
int Qr[10000];
int Qc[10000];
int Qx[10000];

int main()
{
	ios_base::sync_with_stdio(0);
	int n, m, q;
	cin>>n>>m>>q;
	int r,c,x,t;
	
	for(int k = 0; k < q; ++k)
	{
		cin>>x;
		Qt[k] = x;
		if(x==3)
		{
			cin>>Qr[k]>>Qc[k]>>Qx[k];
		}
		else if(x==1)
		{
			cin>>Qr[k];
		}
		else
		{
			cin>>Qc[k];
		}
	}
	
	while(q--)
	{
		x = Qt[q];
		if(x==3)
		{
			r = Qr[q];
			c = Qc[q];
			x = Qx[q];
			A[r-1][c-1] = x;
		}
		else if(x==1)
		{
			r = Qr[q];
			--r;
			t = A[r][m-1];
			for(int i = m-1; i; --i)A[r][i] = A[r][i-1];
			A[r][0] = t;
		}
		else
		{
			c = Qc[q];
			--c;
			t = A[n-1][c];
			for(int i = n-1; i; --i)A[i][c] = A[i-1][c];
			A[0][c] = t;
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)cout<<A[i][j]<<' ';cout<<'\n';
	}
	return 0;
}

