#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include <queue>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int cou=0,r,c,n,ri,ci;
int A[3001][3001],B[3001][3001];
queue<pii> q;

bool search()
{
	for(int j = 1; j <= c; ++j)
	{
		if(!A[1][j])
		{
			q.push(pii(1,j));
		}
	}
	while(!q.empty())
	{
		pii i = q.front();
		q.pop();
		B[i.first][i.second] *= max(B[i.first-1][i.second],A[i.first-1][i.second])
							*   max(B[i.first+1][i.second],A[i.first+1][i.second])
							*   max(B[i.first][i.second-1==0?c:i.second-1],A[i.first][i.second-1==0?c:i.second-1])
							*   max(B[i.first][i.second+1==c+1?1:i.second+1],A[i.first][i.second+1==c+1?1:i.second+1]);
		if(!B[i.first][i.second])
		{
			if(i.first == r)
			{
				return true;
			}
			if(B[i.first-1][i.second]&&!A[i.first-1][i.second])
			{
				q.push(pii(i.first-1,i.second));
			}
			if(B[i.first+1][i.second]&&!A[i.first+1][i.second])
			{
				q.push(pii(i.first+1,i.second));
			}
			if(B[i.first][i.second-1==0?c:i.second-1]&&!A[i.first][i.second-1==0?c:i.second-1])
			{
				q.push(pii(i.first,i.second-1==0?c:i.second-1));
			}
			if(B[i.first][i.second+1==c+1?1:i.second+1]&&!A[i.first][i.second+1==c+1?1:i.second+1])
			{
				q.push(pii(i.first,i.second+1==c+1?1:i.second+1));
			}
		}
	}
	return false;
}

int main()
{
	for(int i = 1; i <= r; ++i)
	{
		for(int j = 1; j <= c; ++j)
		{
			A[i][j] = 0;
		}
	}
	cin>>r>>c>>n;
	while(n--)
	{
		cin>>ri>>ci;
		A[ri][ci] = 1;
		for(int j = 0; j <= c+1; ++j)
		{
			B[0][j] = 0;
		}
		for(int i = 1; i <= r+1; ++i)
		{
			for(int j = 0; j <= c+1; ++j)
			{
				B[i][j] = 1;
			}
		}
		if(search())
		{
			++cou;
		}
		else
		{
			A[ri][ci] = 0;
		}
	}
	cout<<cou;
	return 0;
}