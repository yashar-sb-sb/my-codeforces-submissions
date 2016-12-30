#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

struct tok
{
	int x, y, dx, dy;
	tok(int X, int Y, int DX, int DY) :x(X), y(Y), dx(DX), dy(DY)
	{}
};

int D[400][400][3][3][151];
int times[151];
int ANS[400][400];
int ans = 0, sz = -1;

void go(int x, int y, int dx, int dy, int ti)
{
	if(ti>=sz||D[x][y][1+dx][1+dy][ti])return;
	D[x][y][1+dx][1+dy][ti] = 1;
	ans += !ANS[x][y];
	ANS[x][y] = 1;
	if(times[ti])
	{
			if(dx && dy)
			{
				go(x+dx, y, dx, 0,ti+1);
				go(x, y+dy, 0, dy,ti+1);
			}
			else if(dx)
			{
				go(x+dx, y-1, dx, -1,ti+1);
				go(x+dx, y+1, dx, 1,ti+1);
			}
			else if(dy)
			{
				go(x-1, y+dy, -1, dy,ti+1);
				go(x+1, y+dy, 1, dy,ti+1);
			}
	}
	else go(x + dx, y + dy, dx, dy, ti + 1);
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n,t;
	cin>>n;
	for(int i = 0; i < n; ++i)
	{
		cin>>t;
		for(int j = 0; j < t; ++j)++sz;
		times[sz] = 1;
	}
	++sz;
	go(200,200,1,0,0);
	cout<<ans<<endl;
	return 0;
}