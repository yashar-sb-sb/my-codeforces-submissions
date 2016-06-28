#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int _2[1000][1000], _5[1000][1000];
char dir2[1000][1000],dir5[1000][1000];

int main()
{
//ios_base::sync_with_stdio(0);cin.tie(0);
	int n,inp,pi,pj;
	bool z = false;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			scanf("%d",&inp);
			if(!inp)
			{
				z = true;
				pi = i;
				pj = j;
			}
			while(inp%2==0)
			{
				inp/=2;
				++_2[i][j];
			}
			while(inp%5==0)
			{
				inp/=5;
				++_5[i][j];
			}
		}
	}
	for(int i = 1; i < n; ++i)
	{
		_2[0][i] += _2[0][i-1];
		dir2[0][i] = 'R';
		_2[i][0] += _2[i-1][0];
		dir2[i][0] = 'D';
		_5[0][i] += _5[0][i-1];
		dir5[0][i] = 'R';
		_5[i][0] += _5[i-1][0];
		dir5[i][0] = 'D';
	}
	for(int i = 1; i < n; ++i)
	{
		for(int j = 1; j < n; ++j)
		{
			if(_2[i][j-1] < _2[i-1][j])
			{
				dir2[i][j] = 'R';
				_2[i][j] += _2[i][j-1];
			}
			else
			{
				dir2[i][j] = 'D';
				_2[i][j] += _2[i-1][j];
			}
			if(_5[i][j-1] < _5[i-1][j])
			{
				dir5[i][j] = 'R';
				_5[i][j] += _5[i][j-1];
			}
			else
			{
				dir5[i][j] = 'D';
				_5[i][j] += _5[i-1][j];
			}
		}
	}
	stack<char> res;
	if(z && min(_2[n-1][n-1],_5[n-1][n-1])!=0)
	{
		puts("1");
		for(int ii = 0; ii < pi; ++ii)putchar('D');
		for(int ii = 0; ii < pj; ++ii)putchar('R');
		for(int ii = pi+1; ii < n; ++ii)putchar('D');
		for(int ii = pj+1; ii < n; ++ii)putchar('R');
		return 0;
	}
	if(_2[n-1][n-1] < _5[n-1][n-1])
	{
		printf("%d\n",_2[n-1][n-1]);
		int r=n-1,c=n-1;
		while(dir2[r][c])
		{
			res.push(dir2[r][c]);
			if(dir2[r][c] == 'R')--c;
			else --r;
		}
	}
	else
	{
		printf("%d\n",_5[n-1][n-1]);
		int r=n-1,c=n-1;
		while(dir5[r][c])
		{
			res.push(dir5[r][c]);
			if(dir5[r][c] == 'R')--c;
			else --r;
		}
	}
	while(!res.empty()){putchar(res.top()); res.pop();}
	return 0;
}
