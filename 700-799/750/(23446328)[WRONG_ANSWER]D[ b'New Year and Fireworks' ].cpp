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

int D[400][400][3][3][6];
int ANS[400][400];
int ans = 0;
vector<tok> nex;
vector<tok> cur;
void go(int x, int y, int dx, int dy, int ti)
{
	if(D[x+dx][y+dy][1+dx][1+dy][ti])return;
	D[x+dx][y+dy][1+dx][1+dy][ti] = 1;
	ans += !ANS[x+dx][y+dy];
	ANS[x+dx][y+dy] = 1;
	nex.push_back(tok(x+dx,y+dy,dx,dy));
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int n,t;
	cin>>n;
	nex.push_back(tok(200,200,1,0));
	for(int i = 0; i < n; ++i)
	{
		cin>>t;
		for(int j = 0; j < t; ++j)
		{
			cur.clear();
			swap(cur,nex);
			for(auto k:cur)go(k.x, k.y, k.dx, k.dy, t-j);
		}
		cur.clear();
		swap(cur,nex);
		for(auto k:cur)
		{
			if(k.dx && k.dy)
			{
				nex.push_back(tok(k.x, k.y, k.dx, 0));
				nex.push_back(tok(k.x, k.y, 0, k.dy));
			}
			else if(k.dx)
			{
				nex.push_back(tok(k.x, k.y, k.dx, -1));
				nex.push_back(tok(k.x, k.y, k.dx, 1));
			}
			else if(k.dy)
			{
				nex.push_back(tok(k.x, k.y, -1, k.dy));
				nex.push_back(tok(k.x, k.y, 1, k.dy));
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}