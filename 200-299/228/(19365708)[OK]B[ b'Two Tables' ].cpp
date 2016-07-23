#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[50][50], B[150][150];

int main()
{
ios_base::sync_with_stdio(0);
	int na,ma,nb,mb;
	char c;
	cin>>na>>ma;
	for(int i = 0; i < na; ++i)
		for(int j = 0; j < ma; ++j)
		{
			cin>>c;
			A[i][j] = c == '1';
		}
	cin>>nb>>mb;
	for(int i = 0; i < nb; ++i)
		for(int j = 0; j < mb; ++j)
		{
			cin>>c;
			B[i+50][j+50] = c == '1';
		}
	int mx = -1,x,y;
	for(int i = 0; i < 100; ++i)
	{
		for(int j = 0; j < 100; ++j)
		{
			int s = 0;
			for(int ii = 0; ii < 50; ++ii)
				for(int jj = 0; jj < 50; ++jj)
					s += A[ii][jj]*B[i+ii][j+jj];
			if(s>mx)
			{
				mx = s;
				x = i;
				y = j;
			}
		}
	}
	cout<<x-50<<' '<<y-50<<endl;
	return 0;
}
