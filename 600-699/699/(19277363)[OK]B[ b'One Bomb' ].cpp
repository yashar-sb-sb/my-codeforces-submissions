#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char A[1000][1000];
int R[1000],C[1000];

int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m,s=0;
	cin>>n>>m;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			cin>>A[i][j];
			if(A[i][j] == '*')
				++R[i],++C[j];
		}
	}
	for(int i = 0; i < n; ++i)
		s += R[i];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if(s - R[i] - C[j] + (A[i][j] == '*')==0)
			{
				cout<<"YES\n"<<i+1<<' '<<j+1<<endl;
				return 0;
			}
		}
	}
	return cout<<"NO\n",0;
}
