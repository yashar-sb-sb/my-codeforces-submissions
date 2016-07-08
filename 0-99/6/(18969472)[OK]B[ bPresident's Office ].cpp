#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

bool N[256];
char A[102][102];

int main()
{
ios_base::sync_with_stdio(0);
	int n,m;
	char c;
	cin>>n>>m>>c;
	for(int i = 1; i <= n; ++i)cin>>A[i]+1;
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= m; ++j)
			if(A[i][j]==c)
				for(int ii = 1; ii < 3; ++ii)
				{
					N[A[i+ii/2][j+ii%2]] = true;
					N[A[i-(ii/2)][j-(ii%2)]] = true;
				}
	N[c] = false;
	int r = 0;
	for(int i = 'A'; i <= 'Z'; ++i)r += N[i];
	cout<<r<<endl;
	return 0;
}
