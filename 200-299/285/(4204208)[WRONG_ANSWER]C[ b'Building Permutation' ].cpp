#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<sstream>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int main()
{
ios_base::sync_with_stdio(0);
	int n,c=0,inp,l=0;
	cin>>n;
	bool *f = new bool[n+1];
	int *A = new int[n];
	for(int i = 0; i < n; ++i)
	{
		cin>>inp;
		if(inp>0&&!f[inp])f[inp]=true;
		else A[l++]=inp;
	}
	sort(A,A+l);
	n = 0;
	for(int i = 0; i < l; ++i)
	{
		while(f[++n]);
		c+=ceil(n-A[i]);
	}
	cout<<c;
	return 0;
}
