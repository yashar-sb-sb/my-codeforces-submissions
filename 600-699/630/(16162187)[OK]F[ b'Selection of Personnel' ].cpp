#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

LL A[778][8];

int main()
{
ios_base::sync_with_stdio(0);
	int n;
	for(int i = 0; i < 778; ++i)
	{
		A[i][0] = 1;
		for(int j = 1; j < i && j < 8; ++j)
		{
			A[i][j] = A[i-1][j-1] + A[i-1][j];
		}
		if(i<8)A[i][i] = 1;
	}
	cin>>n;
	cout<<A[n][5]+A[n][6]+A[n][7];
	return 0;
}