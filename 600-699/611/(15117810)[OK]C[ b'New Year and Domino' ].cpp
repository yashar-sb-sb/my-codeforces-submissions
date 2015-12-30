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
#include<set>
#include<fstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[501][501];
int A[501][501], BV[501][501], BH[501][501];

int main()
{
ios_base::sync_with_stdio(0);
	int h, w, q, r1, c1, r2, c2;
	cin>>h>>w;
	for(int i = 1; i <= h; ++i)
		for(int j = 1; j <= w; ++j)
			cin>> S[i][j];
	for(int i = 1; i <= h; ++i)
	{
		for(int j = 1; j <= w; ++j)
		{
			int cc = (int)(S[i][j] == '.')*((int)(S[i-1][j] == '.')+(int)(S[i][j-1] == '.'));
			A[i][j] = A[i][j-1] + A[i-1][j] - A[i-1][j-1] + cc;
			BV[i][j] = BV[i-1][j] + (int)(S[i][j] == '.')*(int)(S[i-1][j] == '.');
			BH[i][j] = BH[i][j-1] + (int)(S[i][j] == '.')*(int)(S[i][j-1] == '.');
		}
	}
	cin>>q;
	while(q--)
	{
		cin>>r1>>c1>>r2>>c2;
		cout<<A[r2][c2] + A[r1][c1] - A[r1][c2] - A[r2][c1] + BV[r2][c1]-BV[r1][c1] + BH[r1][c2]-BH[r1][c1]<<'\n';
	}
	return 0;
}
