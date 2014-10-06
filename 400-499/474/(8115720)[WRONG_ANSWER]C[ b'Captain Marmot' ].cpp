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

int A[4][4],B[4],C[4][2];
pii pi[4];

bool sq()
{
	for(int i = 0; i < 4; ++i)
	{
		pi[i].first = C[i][0];
		pi[i].second = C[i][1];
	}
	sort(pi,pi+4);
	if(pi[0].second>pi[1].second)swap(pi[0],pi[1]);
	if(pi[2].second>pi[3].second)swap(pi[2],pi[3]);
	return (pi[0].first == pi[1].first
		&& pi[2].first == pi[3].first
		&& pi[0].first != pi[2].first
		&& pi[0].second == pi[2].second
		&& pi[1].second == pi[3].second
		&& pi[0].second != pi[1].second
		);
}

void rt(int &x, int &y)
{
	int t;
	if(x>=0 && y>=0)
	{
		t = x;
		x = -y;
		y = t;
	}
	else if(x<0 && y>=0)
	{
		t = x;
		x = -y;
		y = t;
	}
	else if(x>=0 && y<0)
	{
		t = x;
		x = -y;
		y = t;
	}
	else if(x<0 && y<0)
	{
		t = x;
		x = -y;
		y = t;
	}
}

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n;
	while(n--)
	{
		for(int i = 0; i < 4; ++i)
		{
			for(int j = 0; j < 4; ++j)cin>>A[i][j];
		}
		m=13;
		for(B[0] = 0; B[0] < 4; ++B[0])
		{
			for(B[1] = 0; B[1] < 4; ++B[1])
			{
				for(B[2] = 0; B[2] < 4; ++B[2])
				{
					for(B[3] = 0; B[3] < 4; ++B[3])
					{
						for(int i = 0; i < 4; ++i)
						{
							C[i][0] = A[i][0]-A[i][2];
							C[i][1] = A[i][1]-A[i][3];
							for(int j = 0; j < B[i]; ++j)rt(C[i][0],C[i][1]);
							C[i][0] += A[i][2];
							C[i][1] += A[i][3];
						}
						if(sq())
						{
							m = min(m, B[0]+B[1]+B[2]+B[3]);
						}
					}
				}
			}
		}
		if(m==13)cout<<-1<<'\n';
		else cout<<m<<'\n';
	}
	return 0;
}