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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char C[100][100];

int main()
{
ios_base::sync_with_stdio(0);
	int n,i,j;
	cin>>n;
	for(i=0; i < n; ++i)
		for(j=0; j < n; ++j)
			cin>>C[i][j];
	for(i=0; i < n-2; ++i)
	{
		for(j=1; j < n-1; ++j)
		{
			if(C[i][j]=='#')
			{
				if(C[i+1][j]=='#' && C[i+1][j-1]=='#' && C[i+1][j+1]=='#' && C[i+2][j]=='#')
				{
					C[i][j]='.';
					C[i+1][j]='.';
					C[i+1][j-1]='.';
					C[i+1][j+1]='.';
					C[i+2][j]='.';
				}
			}
		}
	}
	for(i=0; i < n; ++i)
		for(j=0; j < n; ++j)
			if(C[i][j]=='#')
			{
				cout<<"NO";
				return 0;
			}
	cout<<"YES";
	return 0;
}