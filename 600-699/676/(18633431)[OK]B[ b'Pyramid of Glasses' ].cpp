#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[10][10];

int main()
{
ios_base::sync_with_stdio(0);
	int n,t;
	cin>>n>>t;
	int inc = 1<<10;
	A[0][0] = inc * t;
	for(int i = 0; i < n - 1; ++i)
	{
		for(int j = 0; j <= i; ++j)
		{
			if(A[i][j] > inc)
			{
				int ext = (A[i][j]-inc)/2;
				A[i+1][j] += ext;
				A[i+1][j+1] += ext;
			}
		}
	}
	int ans = 0;
	for(int i = 0; i < n; ++i)for(int j = 0; j <= i; ++j)
		if(A[i][j] >= inc)
			++ans;
	cout<<ans<<endl;
	return 0;
}
