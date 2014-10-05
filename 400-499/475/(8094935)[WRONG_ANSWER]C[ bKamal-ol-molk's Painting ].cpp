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

char A[1000][1000];
int n,m,k,l,ii,jj,co;

int D()
{
	if(ii+k >= n || jj+l > m) return 0;
	int d=0,x=0;
	for(int f = 0; f < l; ++f)
	{
		if(A[ii+k][jj+f]=='.')++d;
		if(A[ii+k][jj+f]=='X')++x;
	}
	if(d)return 0;
	else
	{
		co+=x;
		++ii;
		return x;
	}
}
int R()
{
	if(ii+k > n || jj+l >= m) return 0;
	int d=0,x=0;
	for(int f = 0; f < k; ++f)
	{
		if(A[ii+f][jj+l]=='.')++d;
		if(A[ii+f][jj+l]=='X')++x;
	}
	if(d)return 0;
	else
	{
		co+=x;
		++jj;
		return x;
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	cin>>n>>m;
	int p=0,ma;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>A[i][j];
			if(A[i][j] == 'X')++p;
		}
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if(A[i][j]=='X')
			{
				l=1;
				for(k = 0; i+k < n && A[i+k][j] == 'X'; ++k);
				if(i+k < n)
				{
					for(l = 0; j+l < m && A[i+k][j+l] == '.'; ++l);
					jj = l;
					for(l = 0; jj+l < m && A[i][jj+l] == 'X'; ++l);
				}
				l = max(l,1);
				ii = i;
				jj = j;
				bool f = true;
				for(int r = 0; r < k; ++r)
				{
					for(int c = 0; c < l; ++c)
					{
						if(A[ii+r][jj+c]=='.'){f = false; break;}
					}
				}
				co=0;
				if(f)
				{
					co=k*l;
					while(R()||D());
				}
				if(co == p)ma = l*k;
				else ma = -1;
				
				//here
				
				
				k=1;
				for(l = 0; j+l < m && A[i][j+l] == 'X'; ++l);
				if(j+l < m)
				{
					for(k = 0; i+k < n && A[i+k][j+l] == '.'; ++k);
					ii = k;
					for(k = 0; ii+k < m && A[ii+k][j] == 'X'; ++k);
				}
				k = max(k,1);
				ii = i;
				jj = j;
				f = true;
				for(int r = 0; r < k; ++r)
				{
					for(int c = 0; c < l; ++c)
					{
						if(A[ii+r][jj+c]=='.'){f = false; break;}
					}
				}
				co=0;
				if(f)
				{
					co=k*l;
					while(D()||R());
				}
				if(ma == -1)
				{
					if(co == p)ma = l*k;
					else ma = -1;
				}
				else if(co == p)ma = min(ma,l*k);
				cout<<ma;
				return 0;
			}
		}
	}
	return 0;
}