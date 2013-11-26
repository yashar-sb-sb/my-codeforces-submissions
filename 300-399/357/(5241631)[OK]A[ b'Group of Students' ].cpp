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

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100];

int main()
{
ios_base::sync_with_stdio(0);
	int m,i,x,y;
	cin>>m;
	cin>>A[0];
	for(i = 1; i < m; ++i)
	{
		cin>>A[i];
		A[i]+=A[i-1];
	}
	cin>>x>>y;
	for(i = 0; i < m; ++i)
	{
		if(A[i]>=x&&A[i]<=y&&A[m-1]-A[i]>=x&&A[m-1]-A[i]<=y)
		{
			cout<<i+2;
			return 0;
		}
	}
	cout << 0;
	return 0;
}