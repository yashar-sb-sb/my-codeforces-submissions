#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include <map>

using namespace std;

typedef long long LL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[102];

int main()
{
	int n,m,x,y;
	cin>>n;
	for(int i = 1; i < n; ++i)cin>>A[i];
	cin>>A[n]>>m;
	while(m--)
	{
		cin>>x>>y;
		A[x-1]+= y-1;
		A[x+1]+= A[x]-y;
		A[x]=0;
	}
	for(int i = 1; i < n; ++i)cout<<A[i]<<endl;
	cout<<A[n];
	return 0;
}